#include <stdio.h>

void rev(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
void aprint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int myArr[] = {0, 1, 2, 3, 4, 5};
    int size = sizeof(myArr) / sizeof(myArr[0]);

    printf("Original Array: ");
    aprint(myArr, size);

    rev(myArr, size);

    printf("\nReversed Array: ");
    aprint(myArr, size);
    return 0;
}