#include <stdio.h>

// Function Declarations
void func1(int array[]);
void func2(int *ptr);
void func3(int arr[2][2]);

// Main Function
int main()
{
    // Arrays initialization
    int arr2[][2] = {{2, 13}, {9, 3}};
    int arr[] = {23, 22, 12, 11};

    // Display original value at index 0
    printf("Original value at index 0 is %d\n", arr[0]);

    // Function 1: Array as Parameter
    func1(arr);

    // Display value at index 0 after modifying in func1
    printf("Value at index 0 after func1 is %d\n", arr[0]);

    // Function 2: Pointer as Parameter
    func2(arr);
    func2(arr);

    // Function 3: 2D Array as Parameter
    func3(arr2);

    return 0;
}

// Function Definitions

// Function 1: Array as Parameter
void func1(int array[])
{
    printf("\n--- Function 1: Array as Parameter ---\n");
    for (int i = 0; i < 4; i++)
    {
        printf("  Element at index %d is %d\n", i, array[i]);
    }
    array[0] = 382; // Modifying array, reflected in main()
}

// Function 2: Pointer as Parameter
void func2(int *ptr)
{
    printf("\n--- Function 2: Pointer as Parameter ---\n");
    for (int i = 0; i < 4; i++)
    {
        printf("  Element at index %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534; // Modifying through pointer, reflected in main()
}

// Function 3: 2D Array as Parameter
void func3(int arr[2][2])
{
    printf("\n--- Function 3: 2D Array as Parameter ---\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("  Element at index %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}
