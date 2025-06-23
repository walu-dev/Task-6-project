#include <stdio.h>
#include "GrossProfit.h"

void CalculateGrossProfit(){
    double SalesRevenue, COGS, GrossProfit;
    SalesRevenue = 15000000;
    COGS = 9000000;
    GrossProfit = SalesRevenue - COGS;
    printf("The gross profit is: %.2lf", GrossProfit);
}
