
#include <stdio.h>

int main()
{
    int a = 15, b = 2;
    char x = 'a';
    double div;
    div = (double)a / b;
    x = x + 3;
    printf("Implicit typecasting is %c\n", x);
    printf("Explicit typecasting is %f", div);
    return 0;
}
