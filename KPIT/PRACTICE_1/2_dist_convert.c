/*
The distance between two cities (in km.) is input through the keyboard. 
Write a program to convert and print this distance in meters, feet, inches and centimetres.
*/

#include <stdio.h>

int main() {
    float km, meters, feet, inches, cm;
    
    printf("Enter distance between cities in km: ");
    scanf("%f", &km);
    
    meters = km * 1000;
    feet = km * 3280.84;
    inches = km * 39370.1;
    cm = km * 100000;
    
    printf("Distance in meters: %.2f\n", meters);
    printf("Distance in feet: %.2f\n", feet);
    printf("Distance in inches: %.2f\n", inches);
    printf("Distance in centimeters: %.2f\n", cm);
    
    return 0;
}