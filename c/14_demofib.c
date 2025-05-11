#include <stdio.h>

int fib(int n) {
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b; 
        a = b - a; 
    }

    return a;
}

int main() {
    int n = 10;
    for (int i = 1; i <= n; i++) {
        printf("%d ", fib(i)); 
    }
    printf("\n");
    return 0;
}
