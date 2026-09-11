#include <stdio.h>

int main() {
    int daysLate;
    int fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 5) {
        fine = daysLate * 2;   // ₹2 per day
        printf("Fine = ₹%d\n", fine);
    }
    else if (daysLate <= 10) {
        fine = (5 * 2) + (daysLate - 5) * 4;   // First 5 days ₹2/day, next days ₹4/day
        printf("Fine = ₹%d\n", fine);
    }
    else if (daysLate <= 30) {
        fine = (5 * 2) + (5 * 4) + (daysLate - 10) * 6;   // Next 20 days ₹6/day
        printf("Fine = ₹%d\n", fine);
    }
    else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}
