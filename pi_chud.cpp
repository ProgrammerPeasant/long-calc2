#include "lib/InfFloat.h"
#include <iostream>
#include <functional>
#include <chrono>

auto cons = InfFloat("10939058860032000");

InfFloat pi_chud(const unsigned digits) {
    InfFloat one(1), six(6), five(5), two(2), mone(-1);
    InfFloat otf("13591409.0"), fff("545140134.0");

    std::function<std::tuple<InfFloat, InfFloat, InfFloat>(const int, const int)> bs;
    bs = [&](const int a, const int b)
    {
        InfFloat Pab, Qab, Tab;
        Pab.SetPrecision(100);
        int m;
        if (b - a == 1)
        {
            InfFloat A(a);
            if (a == 0) Pab = one, Qab = one;
            else {
                Pab = (six * A - five) * (two * A - one) * (six * A - one);
                Qab = A * A * A * cons;
            }
            Tab = Pab * (otf + fff * A);
            if (a & 1) Tab = Tab * mone;
        }
        else
        {
            m = (a + b) / 2;
            InfFloat Pam, Qam, Tam, Pmb, Qmb, Tmb;
            std::tie(Pam, Qam, Tam) = bs(a, m);
            std::tie(Pmb, Qmb, Tmb) = bs(m, b);

            Pab = Pam * Pmb;
            Qab = Qam * Qmb;
            Tab = Qmb * Tam + Pam * Tmb;
        }

        return std::make_tuple(Pab, Qab, Tab);
    };

    unsigned N = digits / 13 + 1;
    InfFloat P, Q, T;
    std::tie(P, Q, T) = bs(0, N);
    InfFloat one_squared = power(InfFloat(10), digits);
    InfFloat sqrtC = sqrtBig(one_squared * InfFloat(10005), one_squared);
    InfFloat answer = Q * InfFloat(426880) * sqrtC / T;
    answer.SetPrecision(digits);
    answer = answer / power(InfFloat(10), digits);

    return answer;

}

int main() {
    int len;
    std::cin >> len;
    auto start = std::chrono::steady_clock::now();
    std::cout << pi_chud(len) << std::endl;
    auto end = std::chrono::steady_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << " ms" << std::endl;
}