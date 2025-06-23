#include <stdio.h>
#include "Depreciation.h"

void CalculateDepreciation(){

    double Cost, ResidualValue, UsefulLife, AnnualDepreciation;
    Cost = 10000000;
    UsefulLife = 5;
    ResidualValue = 2000000;
    AnnualDepreciation = (Cost - ResidualValue)/UsefulLife;
    printf("The Depreciation is: %.2lf", AnnualDepreciation);

}
