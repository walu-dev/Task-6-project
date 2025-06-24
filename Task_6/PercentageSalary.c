#include <stdio.h>
#include "PercentageSalary.h"

 void CalculatePercentageSalary(double salary){
 if (salary < 3000000) {
        printf("Tax Rate: 10%%\n");
    } else if (salary >= 3000000 && salary <= 7000000) {
        printf("Tax Rate: 15%%\n");
    } else if (salary > 7000000) {
        printf("Tax Rate: 20%%\n");
    } else {
        printf("Invalid salary.\n");
    }
 }
