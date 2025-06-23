#include <stdio.h>
#include "SimpleIntrest.h"

void CalculateSimpleIntrest(){
    double Principle, Rate, Time, SimpleIntrest;
    Principle = 2000000;
    Rate = 0.06;
    Time = 3;
    SimpleIntrest = (Principle*Rate*Time);
    printf("The Simple Intrest is: %.2lf", SimpleIntrest);
}
