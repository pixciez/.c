#include <stdio.h>
/*
jump statements part 1
 - break
 - continue
*/
int main()
{ // break

    int i;
    // for loop
    printf("---------- BREAK AT 6 --------------\n");
    for (i = 1; i <= 10; i++)
    {

        // when i = 6, the loop should end
        if (i == 6)
        {
            break;
        }
        else
            printf("%d ", i);
    }
    printf("Loop exited.\n");
    printf("------------------------------------\n\n");
    // continue
    int j;
    // loop
    printf("----------- SKIP AT 2 --------------\n");
    for (j = 0; j < 5; j++)
    {
        if (j == 2)
        {
            // continue to be executed if i = 2
            printf("Skipping iteration  %d\n", j);
            continue;
        }
        else
            printf("Executing iteration %d\n", j);
    }
    printf("------------------------------------\n\n");
    return 0;
}