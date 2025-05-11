#include <stdio.h>
int main()
{
    for (int i = 0; i < 8; i++)
    {
        printf("%d\t ", i);
        for (int j = 0; j < 10; j++)
        {
            int age;
            printf("What's your age?: ");
            scanf("%d", &age);
            if (age > 18)
            goto stop;
           
        }
    }
stop:
    return 0;
}