/*
The length & breadth of a rectangle and radius of a circle are input through the keyboard. 
Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    float length, width, radius;
    
    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &length, &width);
    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    printf("Rectangle area: %.2f\n", length * width);
    printf("Rectangle perimeter: %.2f\n", 2 * (length + width));
    printf("Circle area: %.2f\n", PI * radius * radius);
    printf("Circle circumference: %.2f\n", 2 * PI * radius);
    
    return 0;
}