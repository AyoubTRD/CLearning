#include <stdio.h>

int factorial(int number)
{
    if (number <= 1) 
    {
        return 1;
    }

    return number * factorial(number - 1);
}

int main()
{
    printf("Enter an integer: ");
    int number;

    scanf("%d", &number);

    printf("the factorial of %d is: %i\n", number, factorial(number));
}