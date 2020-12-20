#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int correctNumber = rand() % 6;
    int guessedNumber;
    
    printf("Guess a number between 0-5: ");
    scanf("%d", &guessedNumber);
    if (guessedNumber == correctNumber) 
    {
        printf("You got it right, good job!\n");
    } else 
    {
        printf("Wrong!\n");
    }

    return 0;
}