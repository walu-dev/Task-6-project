#include <stdio.h>
#include <stdlib.h>
#include "DiscountedPrice.h"
#include "TaxAmount.h"
#include "BonusSalary.h"
#include "ProfitOrLoss.h"
#include "DoubleInvestment.h"
#include "TotalExpense.h"
#include "PercentageSalary.h"



int main()
{
    double daysOverdue = 5;
    double dailyFee = 50.0;

    CalculateOverDueFees(daysOverdue, dailyFee);
    return 0;
}
