#include <stdio.h>

int main()
{
    int i = 0, j = 0, k = 0;
    printf("-------------------------\n");
    for (i = 1; i <= 10; i++)
    {
        printf("for %d\n", i);
    }
    printf("-------------------------\n\n");

    printf("-------------------------\n");
    while (j < 10)
    {

        printf("while %d\n", j);
        j++;
    }
    printf("-------------------------\n\n");

    printf("-------------------------\n");
    do // executes atleast once.
    {
        printf("do-while %d\n", k);

        k++;

    } while (k < 0);
    printf("-------------------------\n");
    return 0;
}
