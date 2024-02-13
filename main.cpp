#include "lib/InfFloat.h"
#include <iostream>
#include <cmath>
#include <ctime>

long double calcPi(unsigned long long precision) {
    InfFloat zero = 0_if;
    zero.SetPrecision(precision + 5);
    auto epsilon = 1_if;
    auto c = InfFloat("10939058860032000");
    InfFloat a_sum = 1_if + zero;
    InfFloat b_sum = zero;
    auto k = 1_if;
    InfFloat ak = 1_if + zero;
    auto c_d = sqrtBig(InfFloat(10005 * precision), precision);
    do {
        ak = InfFloat(-1) * ak * ((k * 6_if - 5_if) * (k * 2_if - 1_if) * (k * 6_if - 1_if));
        ak = ak / (k * k * k * c);
        a_sum = a_sum + ak;
        b_sum = b_sum + k * ak;
        k = k + 1_if;
    } while (ak.Abs() >= epsilon);
    InfFloat tmp = 13591409_if * a_sum + 545140134_if * b_sum;

    std::cout << c_d / tmp;
}

//InfFloat chudnovsky_algorithm(unsigned long long iterations) {
//    InfFloat k = 1;
//    InfFloat a_k = InfFloat(iterations);
//    InfFloat a_sum = InfFloat(iterations);
//    InfFloat b_sum = 0;
//    InfFloat one = 1;
//    InfFloat two = 2;
//    InfFloat five = 5;
//    InfFloat six = 6;
//    auto c = InfFloat("10939058860032000");
//    while (true) {
//        a_k = a_k * -1 * (six * k - five) * (two * k - one) * (six * k - one);
//        a_k = (a_k / (k * k * k * c)).Floor();
//        a_sum = a_sum + a_k;
//        b_sum = b_sum + k * a_k;
//        k = k + 1;
//        if (a_k == 0)
//            break;
//    }
//    InfFloat total = InfFloat("13591409") * a_sum + InfFloat("545140134") * b_sum;
//    InfFloat Pi = ((InfFloat("426880") * sqrt1(InfFloat("10050") * InfFloat(iterations), iterations) * InfFloat(iterations)) /
//                   total).Floor();
//    return Pi;
//}


int main() {
    unsigned long long iter = 10000000000;  // Adjust the number of iterations for desired precision
    //std::cout << pi << std::endl;
    //auto d = sqrt(InfFloat("10005000000"), 1000000);
    double PI = 3, n = 2, sign = 1;
    calcPi(100);
    std::clock_t start = std::clock();
    //InfFloat("123456789122345678912234567891223456789122345678912234567891223456789122345678912234567891223456789122345678912") / InfFloat("123456789122345678912234567891223456789122345122345678912234567891223456789122345678912");
    std::clock_t end = std::clock();
    std::cout << 1.0 * (end - start) / CLOCKS_PER_SEC;
}
