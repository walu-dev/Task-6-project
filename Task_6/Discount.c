#include <stdio.h>
#include "Discount.h"

void CalculateDiscount(double originalPrice, double discountPercentage){
    if (discountPercentage > 20) {
            double discountedPrice = originalPrice - (originalPrice * discountPercentage / 100);
            printf("The discounted price is: %.2f\n", discountedPrice);
        } else {
            printf("Discount is not above 20%%. No discounted price to display.\n");
        }
}
