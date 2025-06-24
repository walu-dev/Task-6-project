#include <stdio.h>
#include "MaxDiscount.h"

void CalculatetMaximumDiscount(double originalPrice, double discountPercentage){

    if (originalPrice < 0 || discountPercentage < 0) {
        printf("Invalid input. Original price and discount percentage must be non-negative.\n");
        return;
    }
    double maximumDiscount = (originalPrice * discountPercentage) / 100; // Calculate maximum discount
    printf("The maximum discount offered is: %.2lf\n", maximumDiscount);
}
