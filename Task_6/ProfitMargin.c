#include <stdio.h>
#include "ProfitMargin.h"

void CalculateProfitMargin(){
    double ProfitMargin, Profit, SalesRevenue;
    SalesRevenue = 30000000;
    Profit = 9000000;
    ProfitMargin = (Profit/SalesRevenue)*100;
    printf("The Profit Margin is: %.2lf", ProfitMargin);
}
