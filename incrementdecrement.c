#include <stdio.h>

int main()
{
    int a = 10;
    a++;
    printf("%i\n", a);

    int b = 20;
    printf("%i\n", b++);

    int c = 30;
    ++c;
    printf("%i\n", c);

    int d = 40;
    printf("%i\n", ++d);

    return 0;
}