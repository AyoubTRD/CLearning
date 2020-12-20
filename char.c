#include <stdio.h>

int main()
{
    printf("Enter a character to know its ASCII value: ");
    char c;
    scanf("%c", &c);

    printf("The ASCII value of '%c' is %i\n", c, c);
    return  0;
}