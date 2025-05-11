/*
If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits. 
For example if the number that is input is 12391 then the output should be displayed as 23402.
*/

#include <stdio.h>

int main() {
    int number, result = 0, multiplier = 1;
    
    printf("Enter a five-digit number: ");
    scanf("%d", &number);
    
    while (number > 0) {
        int digit = number % 10;
        digit = (digit + 1) % 10;
        result += digit * multiplier;
        multiplier *= 10;
        number /= 10;
    }
    
    printf("New number: %05d\n", result);
    
    return 0;
}