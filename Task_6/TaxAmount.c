#include <stdio.h>
#include "TaxAmount.h"

void CalculateTaxAmount(double Price, double TaxRate){
    printf("Enter price: ");
    scanf("%lf",&Price);

    printf("Enter Tax rate: ");
    scanf("%lf",&TaxRate);

    double taxAmount = Price * TaxRate / 100;
    printf("The tax amount is: %.2lf\n", taxAmount);
}
