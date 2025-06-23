#include <stdio.h>
#include <math.h>
#include "MonthlyLoan.h"

void CalculateMonthlyLoan(){
    double Principle, Rate, Years, Payment;
    Principle = 50000000;
    Rate = 0.05;
    Years = 5;
    double numerator = (Principle*Rate)*(1+Rate);
    double denominator = pow(1+Rate,Years)-1;
    Payment = numerator/denominator;
    printf("The Monthly loan payment is: %.2lf", Payment);

}
