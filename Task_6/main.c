#include <stdio.h>
#include <stdlib.h>
#include "DiscountedPrice.h"
#include "TaxAmount.h"
#include "BonusSalary.h"

double Price, rate, TaxRate;

int main()
{
    double BaseSalary = 50000;
    double Percentage = 10;
    CalculateBonusSalary(BaseSalary, Percentage);
    return 0;
}
