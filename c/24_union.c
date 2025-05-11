#include <stdio.h>

// Define a union named 'Data' with shared memory location
union Data
{
    int i;   // Integer variable
    float f; // Float variable
    char c;  // Character variable
};

int main()
{
    union Data data; // Declare a variable of type 'union Data'

    // Assigning values to the union members
    data.i = 10; // Assigning value to integer member
    printf("Integer: %d\n", data.i);

    data.f = 3.14; // Assigning value to float member
    printf("Float: %0.2f\n", data.f);

    data.c = 'A'; // Assigning value to character member
    printf("Character: %c\n", data.c);

    // Size of the union
    printf("Size of union Data: %lu bytes\n", sizeof(union Data));

    return 0;
}

/*
Difference between union and structure:

In a union, all members share the same memory location, meaning only one member can contain a value at a time.
use: better memory management in C program.
In a structure, each member has its own separate memory location, allowing multiple members to hold values simultaneously.
*/