#include <stdio.h>
#include "DiscountedPrice.h"

void CalculateDiscountedPrice(double Price, double rate){

    printf("Enter price: ");
    scanf("%lf",&Price);

    printf("Enter rate: ");
    scanf("%lf",&rate);

    double discountedPrice = Price - (Price * rate /100);
    printf("The discounted price is: %.2f\n", discountedPrice);
}
