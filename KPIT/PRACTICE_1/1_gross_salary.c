/* 
Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, 
and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
*/

#include <stdio.h>

int main() {
    float basic_salary, gross_salary;
    
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basic_salary);
    
    gross_salary = basic_salary + (0.4 * basic_salary) + (0.2 * basic_salary);
    
    printf("Ramesh's gross salary: %.2f\n", gross_salary);
    
    return 0;
}