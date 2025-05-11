
#include <stdio.h>

void Vswapx(int x, int y);
void Rswapx(int *, int *);

int main()
{
    int a = 6, b = 9;
    // Pass by Values
    printf("\n------------- VALUE --------------\n");
    Vswapx(a, b); // Actual Parameters
    printf("In the Caller:\na = %d b = %d\n", a, b);
    printf("----------------------------------\n");
    // Pass reference
    printf("\n------------ REFERENCE -----------\n");
    Rswapx(&a, &b);
    printf("Inside the Caller:\na = %d b = %d\n", a, b);
    printf("----------------------------------\n");
    return 0;
}

void Vswapx(int x, int y) // Formal Parameters
{
    int t;

    t = x;
    x = y;
    y = t;

    printf("Inside Function:\nx = %d y = %d\n", x, y);
}

void Rswapx(int *x, int *y) // Formal Parameters
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    printf("Inside the Function:\nx = %d y = %d\n", *x, *y);
}
