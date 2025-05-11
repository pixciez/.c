#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array
                    // arr++ this line will throw an error coz arr is constant. Arthimetics on ptr.
    printf("Array elements using array syntax:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nArray elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", *(ptr + i)); // Using pointer arithmetic
    }
    printf("\n");
    printf("\n---both are same---\n");
    printf(" arr[1]:   %d \n *(arr+1): %d\n", arr[1], *(arr + 1));
    printf("-------------------\n");
    // Basic pointer arithmetic
    printf("\n\nBasic pointer arithmetic:\n");
    printf("Value at ptr: %d\n", *ptr);
    printf("Value at (ptr + 1): %d\n", *(ptr + 1));
    printf("Value at (ptr + 2): %d\n", *(ptr + 2));
    printf("Value at (ptr + 3): %d\n", *(ptr + 3));
    printf("Value at (ptr + 4): %d\n", *(ptr + 4));

    // Incrementing and decrementing pointers
    printf("\nIncrementing and decrementing pointers:\n");
    printf("Value at ptr: %d\n", *ptr);
    ptr++; // Incrementing the pointer
    printf("Value at ptr after increment: %d\n", *ptr);
    ptr--; // Decrementing the pointer
    printf("Value at ptr after decrement: %d\n", *ptr);

    return 0;
}
