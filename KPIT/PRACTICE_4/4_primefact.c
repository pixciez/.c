#include <stdio.h>

void primeFactors(int n) {
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 2)
        printf("%d", n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    primeFactors(n);
    printf("\033[1;31m\x1B[10mASMI SHARMA | 22BCS15410\033[0m");
    return 0;
}
