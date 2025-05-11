#include <stdio.h>

int main()
{
    int num = 44;
    int *ptr = &num;

    printf("\nValue of num: %d\n", num);
    printf("Value pointed to by ptr: %d\n", *ptr);

    printf("\nAddress of pointer to num: %p\n", &ptr);
    printf("Address of num: %p\n", &num);

    printf("\nValue stored in ptr: %p\n", ptr);

    *ptr = 100;
    printf("\nNew value of num: %d\n", num);

    int *p = NULL; // Initializing a pointer to NULL
    if (p == NULL)
        printf("\nThe pointer is currently a null pointer.\n");

    else
        printf("\n\nThe pointer is not a null pointer.\n");

    // Attempting to dereference a null pointer (which is undefined behavior)
    // int value = *ptr;  // Uncommenting this line will lead to undefined behavior

    return 0;
}
