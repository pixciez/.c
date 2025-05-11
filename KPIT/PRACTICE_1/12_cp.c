/*
If the total selling price of 15 items and the total profit earned on them is input through the keyboard, 
write a program to find the cost price of one item.
*/

#include <stdio.h>

int main() {
    float total_selling_price, total_profit, cost_price;
    
    printf("Enter total selling price of 15 items: ");
    scanf("%f", &total_selling_price);
    
    printf("Enter total profit: ");
    scanf("%f", &total_profit);
    
    cost_price = (total_selling_price - total_profit) / 15;
    
    printf("Cost price of one item: %.2f\n", cost_price);
    
    return 0;
}