#include <stdio.h>

// Scenario 1: Typedef for Basic Data Type
typedef int myInt; // Define 'myInt' as an alias for 'int'

// Scenario 2: Typedef for Pointer
typedef int *IntPointer; // Define 'IntPointer' as an alias for 'int*'

// Scenario 3: Typedef for Structure
typedef struct
{
    char name[50];
    int age;
    float grade;
} Student; // Define 'Student' as an alias for the structure

int main()
{
    // Scenario 1: Typedef for Basic Data Type
    printf("--------------------\n");
    printf("Scenario 1: Typedef for Basic Data Type\n");
    myInt num = 42;
    printf("Value of num: %d\n", num);
    printf("--------------------\n");

    // Scenario 2: Typedef for Pointer
    printf("Scenario 2: Typedef for Pointer\n");
    int intValue = 100;
    IntPointer ptr = &intValue;
    printf("Value at ptr: %d\n", *ptr);
    printf("--------------------\n");

    // Scenario 3: Typedef for Structure
    printf("Scenario 3: Typedef for Structure\n");
    Student student1 = {"John Doe", 20, 85.5};
    printf("Student Information - Name: %s, Age: %d, Grade: %.2f\n",
           student1.name, student1.age, student1.grade);
    printf("--------------------\n");

    return 0;
}
