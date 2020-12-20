#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) 
{
    bool isPrime = true;
    for (int i = sqrt(num); i > 1; i--) 
    {
        if (num % i == 0) 
        {
            isPrime = false;
            break;
        } 
    }
    return isPrime;
}

int main()
{
    int maxNum;
    printf("Enter an integer: ");
    scanf("%d", &maxNum);

    int primeNumbers = 0;

    if (maxNum < 1) 
    {
        return 1;
    }

    for (int i = maxNum - 1; i > 1; i--) 
    {
        if (isPrime(i)) 
        {
            primeNumbers++;
        };
    }
    if (primeNumbers > 0) printf("\n");
    printf("The number of prime numbers between 0-%i is: %i\n", maxNum, primeNumbers);

    return 0;
}
