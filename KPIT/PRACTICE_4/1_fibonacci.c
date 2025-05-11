/*
#include <stdio.h>

void fib(int n) {
    int a = 0, b = 1, next;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fib(n);
    return 0;
}
*/

#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
        return n; // Base cases: F(0) = 0, F(1) = 1
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    printf("\n");
    printf("\033[1;31m\x1B[10mASMI SHARMA | 22BCS15410\033[0m");

    return 0;
}
