#include <stdio.h>

// Global variable to count the number of calls to fib_recursive()
int fib_counter = 0;

int fib_recursive(int n, int x);
int fib_iterative(int n);

// Function to count the number of calls to fib_recursive()
void countFibCalls(int x);

int main()
{
    int num, x;
    printf("------------ FIBONACCI SERIES ------------\n");
    printf("\nEnter the index: ");
    scanf("%d", &num);

    printf("Enter the index you want to count: ");
    scanf("%d", &x);
    printf("\n------------------------------------------\n");

    // Reset the counter before each function call
    fib_counter = 0;

    printf("\n\nNumber at position no %d using iterative:  %d\n", num, fib_iterative(num));
    printf("Number at position no %d using recursive:  %d\n\n", num, fib_recursive(num, x));

    countFibCalls(x);

    return 0;
}

int fib_recursive(int n, int x)
{
    // Increment the counter whenever fib_recursive() is called
    if (n == x)
    {
        fib_counter++;
    }

    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1, x) + fib_recursive(n - 2, x);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b; // 1 for iteration 1
        a = b - a; // 1 for iteration 1
    }

    return a;
}

// This is why recursive is slow.

void countFibCalls(int x)
{
    printf("fib(%d) was called %d times in the recursive function.\n", x, fib_counter);
}
