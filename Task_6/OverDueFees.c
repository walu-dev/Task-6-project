#include <stdio.h>
#include "OverDueFees.h"

void CalculateOverDueFees(double daysOverdue, double dailyFee){
    if (daysOverdue < 0 || dailyFee < 0) {
        printf("Invalid input. Days overdue and daily fee must be non-negative.\n");
        return;
    }

    double totalFee = daysOverdue * dailyFee; // Calculate total overdue fee
    printf("The total overdue fee is: %.2f\n", totalFee);

}
