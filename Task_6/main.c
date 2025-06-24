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
    double salary = 4500000; // Example salary

    CalculatePercentageSalary(salary);
    return 0;
}
