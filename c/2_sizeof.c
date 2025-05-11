#include <stdio.h>

int main()
{
     // Display Size of Data Types
     printf("---------------- SIZE OF -----------------\n");
     printf("char:         %lu\n", sizeof(char));
     printf("int:          %lu\n", sizeof(int));
     printf("float:        %lu\n", sizeof(float));
     printf("double:       %lu\n", sizeof(double));
     printf("char[50]:     %lu\n", sizeof(char[50])); // Equivalent to a string in C

     // Size of int + double
     int a = 5;
     double d = 10.21;
     printf("int + double: %lu\n", sizeof(a + d));

     // Size of an Array
     int arr[] = {1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14};
     printf("\nNumber of elements: %lu\n", sizeof(arr) / sizeof(arr[0]));

     printf("------------------------------------------\n");

     return 0;
}
