#include <stdio.h>
#include <stdlib.h>
#include "DiscountedPrice.h"
#include "TaxAmount.h"
#include "BonusSalary.h"
#include "ProfitOrLoss.h"
#include "DoubleInvestment.h"
#include "TotalExpense.h"



int main()
{
    double itemsSold[] = {10, 20, 15, 30};       // Number of items sold
    double itemPrices[] = {50.0, 30.0, 20.0, 40.0}; // Prices of items
    double itemCount = 4; // Number of items
    CalculateTotalExpense(itemsSold, itemPrices, itemCount);
    return 0;
}
