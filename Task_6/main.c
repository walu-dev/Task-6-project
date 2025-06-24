#include <stdio.h>
#include <stdlib.h>
#include "DiscountedPrice.h"
#include "TaxAmount.h"
#include "BonusSalary.h"
#include "ProfitOrLoss.h"



int main()
{
    double originalPrice = 1000.0;
    double discountPercentage = 25;
    CalculateDiscount(originalPrice, discountPercentage);
    return 0;
}
