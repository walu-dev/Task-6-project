#include <stdio.h>
#include "DoubleInvestment.h"

void CalculateDoubleInvestment(double annualRateOfReturn){
         if (annualRateOfReturn <= 0) {
            printf("Invalid rate of return. It must be greater than 0.\n");
            return;
        }


        double years = 72 / annualRateOfReturn;
        printf("It will take approximately %.2lf years to double the investment.\n", years);
}
