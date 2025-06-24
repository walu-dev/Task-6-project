#include <stdio.h>
#include "TotalExpense.h"

void CalculateTotalExpense(double itemsSold[], double itemPrices[], double itemCount){
     double totalExpenses = 0;

    for (int i = 0; i < itemCount; i++) {
        totalExpenses += itemsSold[i] * itemPrices[i]; // Calculate total expenses
    }

    printf("The total expenses of the company are: %.2lf\n", totalExpenses);
}
