#include <stdio.h>

int main()
{
    int lateDays;
    int fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays > 30)
    {
        printf("Membership Cancelled\n");
    }
    else if (lateDays <= 5)
    {
        fine = lateDays * 2;
        printf("Library Fine = Rs.%d\n", fine);
    }
    else if (lateDays <= 10)
    {
        fine = (5 * 2) + ((lateDays - 5) * 4);
        printf("Library Fine = Rs.%d\n", fine);
    }
    else
    {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        printf("Library Fine = Rs.%d\n", fine);
    }

    return 0;
}