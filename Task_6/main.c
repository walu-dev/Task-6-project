#include <stdio.h>
#include <stdlib.h>
#include "DiscountedPrice.h"
#include "TaxAmount.h"
#include "BonusSalary.h"
#include "ProfitOrLoss.h"
#include "DoubleInvestment.h"



int main()
{
    double annualRateOfReturn = 6.0; // Example annual rate of return (in percentage)
    CalculateDoubleInvestment(annualRateOfReturn);
    return 0;
}
