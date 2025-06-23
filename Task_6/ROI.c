#include <stdio.h>
#include "ROI.h"

void CalculateRoi(){
    double Investment, Profit, ROI, OriginalPrice, FinalPrice;
    Investment = 10000000;
    FinalPrice = 12000000;
    Profit = FinalPrice - Investment;
    ROI = (Profit/Investment)*100;
    printf("The ROI of is: %.2lf", ROI);
}
