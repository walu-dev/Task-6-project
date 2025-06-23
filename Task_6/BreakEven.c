#include <stdio.h>
#include "BreakEven.h"

void CalculateBreakEven(){

    int FixedCosts, PricePerUnit, VariableCosts, BreakEvenPoint;
    FixedCosts = 10000000;
    VariableCosts = 50000;
    PricePerUnit = 100000;
    BreakEvenPoint = FixedCosts/(PricePerUnit - VariableCosts);
    printf("The Break Even  is: %d", BreakEvenPoint);
}
