#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int is_prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int choice, num;
    while (1)
    {
        printf("\n");
        printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Factorial: %d\n", factorial(num));
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Prime: %s\n", is_prime(num) ? "Yes" : "No");
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Odd or Even: %s\n", (num % 2 == 0) ? "Even" : "Odd");
            break;
        case 4:
            printf("\033[1;31m\x1B[10mASMI SHARMA | 22BCS15410\033[0m");
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
