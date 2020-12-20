#include <stdio.h>
#include <string.h>

int factorial(int number)
{
    if (number <= 1) 
    {
        return 1;
    }

    return number * factorial(number - 1);
}

typedef struct
{
    char firstName[32];
    char lastName[32];
    int age;
    int weight;
} Person;

int main()
{
    Person me = {"Ayoub", "Taouarda", 16, factorial(8)};
    printf("Name: %s\n", strcat(strcat(me.firstName, " "), me.lastName));
    printf("Age: %d\n", me.age);
    printf("Weight: %dKg\n", me.weight);

    return 0;
}