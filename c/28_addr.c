#include <stdio.h>
#include <string.h>

int main()
{
    int n = 5;
    int a[] = {1, 2, 3, 4, 5};
    int r[n];

    for (int i = 0; i < n; i++)
    {
        r[i] = a[n - i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d, addr: %p\n", i, a[i], (void *)&a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("r[%d] = %d, addr: %p\n", i, r[i], (void *)&r[i]);
    }

    return 0;
}
