#include <stdio.h>
#include "TotalSalesPrice.h"

void CalculateTotalSalesPrice(){
    double OriginalPrice, Discount, SalePrice;
    OriginalPrice = 200000;
    Discount = 0.1;
    SalePrice = OriginalPrice - (OriginalPrice*Discount);
    printf("The total Sale Price is: %.2lf", SalePrice);

}
