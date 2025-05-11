#include <stdio.h>
/*
 conversion of units
- kilometers to miles
- inches to foot
- centimeters to inches
- pounds to kgs
- inches to meters
 */

void kmToMiles();
void inchesToFeet();
void cmToInches();
void poundsToKgs();
void inchesToMeters();

int main()
{
    int choice;

    printf("\n-------------- MENU -------------\n");
    printf("1. Convert kilometers to miles\n");
    printf("2. Convert inches to feet\n");
    printf("3. Convert centimeters to inches\n");
    printf("4. Convert pounds to kilograms\n");
    printf("5. Convert inches to meters\n");
    printf("0. EXIT\n");
    printf("---------------------------------\n");


    do
    {

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            kmToMiles();
            break;
        case 2:
            inchesToFeet();
            break;
        case 3:
            cmToInches();
            break;
        case 4:
            poundsToKgs();
            break;
        case 5:
            inchesToMeters();
            break;
        case 0:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}

void kmToMiles()
{
    double kilometers, miles;
    printf("Enter distance in kilometers: ");
    scanf("%lf", &kilometers);
    miles = kilometers * 0.621371;
    printf("%.2f km =  %.2f miles.\n", kilometers, miles);
}

void inchesToFeet()
{
    double inches, feet;
    printf("Enter length in inches: ");
    scanf("%lf", &inches);
    feet = inches / 12.0;
    printf("%.2f inches = %.2f feet.\n", inches, feet);
}

void cmToInches()
{
    double centimeters, inches;
    printf("Enter length in centimeters: ");
    scanf("%lf", &centimeters);
    inches = centimeters / 2.54;
    printf("%.2f cm = %.2f inches.\n", centimeters, inches);
}

void poundsToKgs()
{
    double pounds, kilograms;
    printf("Enter weight in pounds: ");
    scanf("%lf", &pounds);
    kilograms = pounds * 0.453592;
    printf("%.2f pounds = %.2f kg.\n", pounds, kilograms);
}

void inchesToMeters()
{
    double inches, meters;
    printf("Enter length in inches: ");
    scanf("%lf", &inches);
    meters = inches * 0.0254;
    printf("%.2f inches = %.2f m.\n", inches, meters);
}
