#include <stdio.h>
#include "FlatIntrest.h"

void CalculateFlatIntrest(){
    double InvestmentAmount, time, rate, FlatIntrest;
    InvestmentAmount = 1000000;
    rate = 0.04;
    time = 2;
    FlatIntrest = InvestmentAmount * rate * time;
    printf("The Flat Intrest is: %.2lf", FlatIntrest);

}
