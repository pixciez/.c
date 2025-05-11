#include <stdio.h>

void intToRoman(int num)
{
    char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    for (int i = 0; i < 13; i++)
    {
        while (num >= values[i])
        {
            printf("%s", roman[i]);
            num -= values[i];
        }
    }
}

int main()
{
    int number;
    printf("Enter a number (1-3999): ");
    scanf("%d", &number);

    if (number >= 1 && number <= 3999)
    {
        intToRoman(number);
        printf("\n");
    }
    else
    {
        printf("Number out of range.\n");
    }
    printf("\033[1;31m\x1B[10mASMI SHARMA | 22BCS15410\033[0m");

    return 0;
}
