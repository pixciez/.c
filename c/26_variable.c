#include <stdio.h>

void increment()
{

    static int count;

    count++;

    printf("Count: %d\n", count);
}

int main()
{

    increment(); // Output: Count: 1
    increment(); // Output: Count: 2
    increment(); // Output: Count: 3

    return 0;
}

/*
Local Variables:

- Declared inside a function or block of code.
- Scope limited to the function or block where they are declared.
- Must be initialized manually; the system does not initialize them.
- Cannot be accessed outside the function or block where they are declared.

Global Variables:

- Can be accessed and modified by any function in the program.
- Defined outside of any function, usually at the top of the file.
- Automatically initialized by the system when defined.
- If a local variable and a global variable share the same name, the local variable takes precedence.

Formal Parameters:

- Have precedence over global variables with the same name.
- Parameters in the definition of a function.
- Treated as local variables within the function.
- Also known as formal arguments.

Static Variables:

- Not re-initialized in the new scope.
- Retain their value even after exiting the scope.
- Can be declared inside or outside functions.
- Local to the block where they are declared.
- Remains in memory throughout the span of program.
- Default value is zero.
- Can only be initialized by constant literals (fixed value, no function).
*/