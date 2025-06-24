#include <stdio.h>
#include <stdlib.h>
#include "DiscountedPrice.h"
#include "TaxAmount.h"
#include "BonusSalary.h"
#include "ProfitOrLoss.h"



int main()
{
    double SellingPrice = 1200.0;
    double CostPrice = 1000.0;
    calculateProfitOrLoss(SellingPrice,CostPrice);
    return 0;
}
