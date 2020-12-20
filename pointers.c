#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5;

    // This is how to declare a pointer 
    int *xPointer = &x;
    // This how to access the value of the variable of the pointer
    printf("%d\n", *xPointer);

    int a = 10;
    int b = 5;

    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);

    return 0;
}