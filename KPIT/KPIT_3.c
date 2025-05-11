#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int size = 2 * n - 1;
    printf("\n");
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            int min = i < j ? i : j;
            min = min < size - i + 1 ? min : size - i + 1;
            min = min < size - j + 1 ? min : size - j + 1;
            printf("%d ", n - min + 1);
        }
        printf("\n");
    }
    printf("\n");
    // Change font color to red and bold, and set font size to 10
    printf("\033[1;31m"); // Enable bold and red text
    printf("\x1B[10m");   // Set font size to 10
    printf("ASMI SHARMA | 22BCS15410");
    printf("\033[0m"); // Reset text format

    return 0;
}