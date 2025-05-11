#include <stdio.h>

void addAndSubtract(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - 2 * (*b);
}

int main()
{
    int num1, num2;

    printf("\nEnter the first number: ");
    scanf("%d", &num1);

    printf("\nEnter the second number: ");
    scanf("%d", &num2);
    printf("\n------------------------------------\n");
    printf("Original values\n a = %d, b = %d\n", num1, num2);

    addAndSubtract(&num1, &num2);

    printf("After adding and subtracting\n a = %d, b = %d\n", num1, num2);
    printf("-------------------------------------\n");
    return 0;
}
