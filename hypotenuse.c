#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;

    printf("Enter the value of a: ");
    scanf("%lf", &a);

    printf("Enter the value of b: ");
    scanf("%lf", &b);

    double hypotenuse = sqrt(pow(a, 2) + pow(b, 2));

    printf("The length of the hypotenuse is %lf \n", hypotenuse);

    return 0;
}