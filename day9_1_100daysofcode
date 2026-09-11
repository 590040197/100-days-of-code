#include<stdio.h>
#include<math.h>

int main() {
    double a,b,c, discriminant,root1, root2, realpart, imagepart;

    printf("Enter coefficient a,b and c:");
    scanf("%1f %1f %1f", &a, &b, &c);

    if(a==0)
    {
        printf("Not a quadratic eqation.\n");
        return 0;
    }
    discriminant = b * b - 4 * a * c;

    if(discriminant>0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("\nRoots are real and distinct\n");
        printf("Root 1 = %.2lf\n", root1);
        printf(" Root 2 = %.21f\n ", root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b/(2*a);

        printf("\nRoots are Real and Equal\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1); 
    }
    else{
        realpart = -b/(2*a);
        imagepart = sqrt(-discriminant)/(2*a);
       
        printf("\nRoots are Complex (Imaginary)\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realpart, imagepart);
        printf("Root 2 = %.2lf - %.2lfi\n", realpart, imagepart);
}
    return 0;

    }

