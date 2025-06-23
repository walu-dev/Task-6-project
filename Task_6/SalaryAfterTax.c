#include <stdio.h>
#include "SalaryAfterTax.h"

void CalculateSalary(){
    double OriginalSalary, TaxRate, SalaryAfterTax;
    OriginalSalary = 5000000;
    TaxRate = 0.15;
    SalaryAfterTax = OriginalSalary-(OriginalSalary*TaxRate);
    printf("The salary after tax is: %.2lf",SalaryAfterTax);
}
