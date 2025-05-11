/*
If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.
*/

#include <stdio.h>

int main() {
    int number, first, last;
    
    printf("Enter a four-digit number: ");
    scanf("%d", &number);
    
    last = number % 10;
    first = number / 1000;
    
    printf("Sum of first and last digit: %d\n", first + last);
    
    return 0;
}