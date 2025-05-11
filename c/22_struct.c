#include <stdio.h>

// Define a struct to represent student information
struct Student
{
    char name[50];
    int age;
    float grade;
};

int main()
{
    // Create instances of the struct for three students
    struct Student student1 = {"John Doe", 20, 85.5};
    struct Student student2 = {"Jane Smith", 22, 92.0};
    struct Student student3 = {"Bob Johnson", 21, 78.8};

    // Print information for each student using structure member operator [.]
    printf("\nStudent Information:\n");

    printf("--------------------\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Grade: %.2f\n", student1.grade);

    printf("--------------------\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Grade: %.2f\n", student2.grade);

    printf("--------------------\n");
    printf("Name: %s\n", student3.name);
    printf("Age: %d\n", student3.age);
    printf("Grade: %.2f\n", student3.grade);
    printf("--------------------\n");

    return 0;
}
