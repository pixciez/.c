#include <stdio.h>

int main()
{
    char ch, m, s, ms, n;
    printf("------------------ POINTS DISTRIBUTION --------------\n");
    printf("'m'  : only passed maths exam.\n");
    printf("'s'  : only passed science exam.\n");
    printf("'ms' : passed both maths and science exam.\n");
    printf("'n'  : passed no exam. \n");
    printf("------------------------------------------------------\n");
    printf("\nKindly enter your choice: ");
    scanf("%c", &ch);
    printf("\n");
    if (ch += m || ch == s)
    {
        printf("\nGoodjob! You're awarded with 15 points.");
    }
    else if (ch == ms)
    {
        printf("\nGoodjob! You're awarded with 45 points.");
    }
    else
    {
        printf("\nYou're awarded with 0 points. Better luck next time!");
    }
    return 0;
}
