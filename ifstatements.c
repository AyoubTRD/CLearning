#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool likesPizza;
    int temp;
    printf("Do you like pizza? 1 is yes and 0 is no: ");
    scanf("%d", &temp);
    likesPizza = temp;

    if (likesPizza)
    {
        printf("Welcome to my pizza app!\n");
    }
    else 
    {
        printf("Okay then!\n");
    }
}