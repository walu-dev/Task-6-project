#include <stdio.h>
#include <stdlib.h>
#include "DiscountedPrice.h"
#include "TaxAmount.h"

double Price, rate, TaxRate;

int main()
{
    //CalculateDiscountedPrice(Price, rate);
    CalculateTaxAmount(Price, TaxRate);
    return 0;
}
