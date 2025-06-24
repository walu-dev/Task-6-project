#include <stdio.h>
#include "ProfitOrLoss.h"

void calculateProfitOrLoss(double SellingPrice, double CostPrice){
    if (SellingPrice > CostPrice) {
        printf("Profit\n");
    } else if (SellingPrice < CostPrice) {
        printf("Loss\n");
    } else {
        printf("No Profit, No Loss\n");
    }

}
