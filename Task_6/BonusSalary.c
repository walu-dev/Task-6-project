#include <stdio.h>
#include "BonusSalary.h"

void CalculateBonusSalary(double BaseSalary, double Percentage){


    double totalSalary = BaseSalary + (BaseSalary * Percentage / 100);
    printf("The total salary after bonus is: %.2f\n", totalSalary);

}
