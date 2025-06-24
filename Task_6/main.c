#include <stdio.h>
#include <stdlib.h>
#include "DiscountedPrice.h"
#include "TaxAmount.h"
#include "BonusSalary.h"
#include "ProfitOrLoss.h"
#include "DoubleInvestment.h"
#include "TotalExpense.h"
#include "PercentageSalary.h"
#include "OverDueFees.h"
#include "MaxDiscount.h"



int main()
{
    double originalPrice = 5000.0;
    double discountPercentage = 25;

    CalculatetMaximumDiscount(originalPrice, discountPercentage);
    return 0;
}
