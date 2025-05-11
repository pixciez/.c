#include <stdio.h>

// Function Declarations
int getInput();
void printRightHalfPyramid(int rows);
void printLeftHalfPyramid(int rows);
void printFullPyramid(int rows);
void printInvertedRightHalfPyramid(int rows);
void printInvertedLeftHalfPyramid(int rows);
void printRectangle(int rows, int cols);
void printHollowRectangle(int rows, int cols);

int main()
{
    int rows, cols, choice;

    printf("--------- STAR PATTERNS --------\n");
    printf("1. Right Half Pyramid\n");
    printf("2. Left Half Pyramid\n");
    printf("3. Full Pyramid\n");
    printf("4. Inverted Right Half Pyramid\n");
    printf("5. Inverted Left Half Pyramid\n");
    printf("6. Rectangle\n");
    printf("7. Hollow Rectangle\n");
    printf("0. EXIT\n");
    printf("--------------------------------\n");

    do
    {
        printf("\nEnter your choice: ");
        if (scanf("%d", &choice) != 1)
            getchar();

        switch (choice)
        {
        case 1:
            rows = getInput();
            printRightHalfPyramid(rows);
            break;
        case 2:
            rows = getInput();
            printLeftHalfPyramid(rows);
            break;
        case 3:
            rows = getInput();
            printFullPyramid(rows);
            break;
        case 4:
            rows = getInput();
            printInvertedRightHalfPyramid(rows);
            break;
        case 5:
            rows = getInput();
            printInvertedLeftHalfPyramid(rows);
            break;
        case 6:
            rows = getInput();
            cols = getInput();
            printRectangle(rows, cols);
            break;
        case 7:
            rows = getInput();
            cols = getInput();
            printHollowRectangle(rows, cols);
            break;
        case 0:
            printf("\nExiting the program. Goodbye!\n");
            break;
        default:
            printf("\nInvalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}

// Function to Get Input
int getInput()
{
    int input;
    printf("Enter value: ");
    scanf("%d", &input);
    return input;
}

// Function to Print Right Half Pyramid
void printRightHalfPyramid(int rows)
{
    printf("\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to Print Left Half Pyramid
void printLeftHalfPyramid(int rows)
{
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
            printf(" ");

        for (int k = 0; k <= i; k++)
            printf("* ");

        printf("\n");
    }
}

// Function to Print Full Pyramid
void printFullPyramid(int rows)
{
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
            printf(" ");

        for (int k = 0; k < 2 * i + 1; k++)
            printf("* ");

        printf("\n");
    }
}

// Function to Print Inverted Right Half Pyramid
void printInvertedRightHalfPyramid(int rows)
{
    printf("\n");
    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }
}

// Function to Print Inverted Left Half Pyramid
void printInvertedLeftHalfPyramid(int rows)
{
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2 * i; j++)
            printf(" ");

        for (int k = 0; k < rows - i; k++)
            printf("* ");

        printf("\n");
    }
}

// Function to Print Rectangle
void printRectangle(int rows, int cols)
{
    printf("\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to Print Hollow Rectangle
void printHollowRectangle(int rows, int cols)
{
    printf("\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
