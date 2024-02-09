#include "lib/InfFloat.h"
#include <iostream>
#include <cmath>

void calcPi(unsigned int precision) {

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
}
