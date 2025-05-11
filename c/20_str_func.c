#include <stdio.h>
#include <string.h>

// Function Declarations
void compareStrings();
void concatenateStrings();
void calculateStringLength();
void reverseString();
void copyString();

// Main Function
int main()
{
    int choice;

    // Display Menu
    printf("\n------ String Functions -----\n");
    printf("1. Compare Strings\n");
    printf("2. Concatenate Strings\n");
    printf("3. Calculate String Length\n");
    printf("4. Reverse String\n");
    printf("5. Copy String\n");
    printf("0. Exit\n");
    printf("-------------------------------\n");

    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        // Perform Function Based on User Choice
        switch (choice)
        {
        case 1:
            compareStrings();
            break;
        case 2:
            concatenateStrings();
            break;
        case 3:
            calculateStringLength();
            break;
        case 4:
            reverseString();
            break;
        case 5:
            copyString();
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

// Function to Compare Strings
void compareStrings()
{
    printf("\n--- Compare Strings ---\n");

    // String Comparison
    char str1[50], str2[50];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    int result = strcmp(str1, str2);

    if (result == 0)
    {
        printf("The strings are equal.\nc = %d\n", result);
    }
    else if (result < 0)
    {
        printf("String 1 is lexicographically smaller than String 2.\nc = %d\n", result);
    }
    else
    {
        printf("String 1 is lexicographically larger than String 2.\nc = %d\n", result);
    }
}

// Function to Concatenate Strings
void concatenateStrings()
{
    printf("\n--- Concatenate Strings ---\n");

    // String Concatenation
    char str1[50], str2[50], result[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    strcpy(result, strcat(str1, str2));

    printf("Concatenated string: %s\n", result);
}

// Function to Calculate String Length
void calculateStringLength()
{
    printf("\n--- Calculate String Length ---\n");

    // String Length Calculation
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    int length = strlen(str);
    printf("Length of the string: %d\n", length);
}

// Function to Reverse String
void reverseString()
{
    printf("\n--- Reverse String ---\n");

    // String Reversal
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Function to Copy String
void copyString()
{
    printf("\n--- Copy String ---\n");

    // String Copying
    char source[50], destination[50];
    printf("Enter the source string: ");
    scanf("%s", source);

    strcpy(destination, source);

    printf("Copied string: %s\n", destination);
}
