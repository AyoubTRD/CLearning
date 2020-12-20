#include <stdio.h>

int main()
{
    int slices;
    int people;

    printf("Enter the number of slices: ");
    scanf("%i", &slices);

    printf("Enter the number of people: ");
    scanf("%i", &people);
    

    double slicesPerPerson = (double) slices / people;
    printf("Number of slices per person: %lf\n", slicesPerPerson);

    return 0;
}