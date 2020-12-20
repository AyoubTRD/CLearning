#include <stdio.h>

int main() 
{
    printf("Enter a number: ");

    double num;
    scanf("%lf", &num);

    printf("Your number in decimal notation: %f\n", num);
    printf("Your number in scientific notation: %e\n", num);
    printf("Your number in the appropriate notation: %g\n", num);

    return 0;
}