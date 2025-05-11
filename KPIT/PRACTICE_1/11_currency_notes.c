/*
A cashier has currency notes of denominations 10, 50 and 100. 
If the amount to be withdrawn is input through the keyboard in hundreds, 
find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.
*/

#include <stdio.h>

int main() {
    int amount, hundreds, fifties, tens;
    
    printf("Enter amount to withdraw (in hundreds): ");
    scanf("%d", &amount);
    
    amount *= 100;
    
    hundreds = amount / 100;
    amount %= 100;
    
    fifties = amount / 50;
    amount %= 50;
    
    tens = amount / 10;
    
    printf("100 rupee notes: %d\n", hundreds);
    printf("50 rupee notes: %d\n", fifties);
    printf("10 rupee notes: %d\n", tens);
    
    return 0;
}