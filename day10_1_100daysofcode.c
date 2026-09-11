#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("Triangle is Equilateral.\n");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("Triangle is Isosceles.\n");
    }
    else
    {
        printf("Triangle is Scalene.\n");
    }

    return 0;
}