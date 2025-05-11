#include <stdio.h>

int main()
{
    int m = 21, u, c;
    while (m > 1)
    {
        printf("\nPick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &u);
        if (u < 1 || u > 4)
        {
            printf("Invalid choice\n");
            continue;
        }
        m -= u;
        c = 5 - u;
        printf("Computer picks %d matchsticks\n", c);
        m -= c;
        printf("%d matchsticks left\n", m);
    }
    printf("\nYou are forced to pick the last matchstick. You lose!\n");

    printf("\033[1;31m\x1B[10mASMI SHARMA | 22BCS15410\033[0m");
    return 0;
}
