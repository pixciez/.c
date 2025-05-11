#include <stdio.h>

void tri(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * (n - i) - 1; j++)
            printf(" ");
        for (int k = 0; k < 2 * i + 1; k++)
            printf("* ");
        printf("\n");
    }
}

void sq(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("* ");
        printf("\n");
    }
}

void dia(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

int main() {
    int n, choice;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    printf("Choose a pattern to print:\n");
    printf("1. Triangle\n");
    printf("2. Square\n");
    printf("3. Diamond\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    printf("\n");

    switch(choice) {
        case 1:
            tri(n);
            break;
        case 2:
            sq(n);
            break;
        case 3:
            dia(n);
            break;
        default:
            printf("Invalid choice!\n");
    }
     printf("\n");
    // Change font color to red and bold, and set font size to 10
    printf("\033[1;31m"); // Enable bold and red text
    printf("\x1B[10m");   // Set font size to 10
    printf("ASMI SHARMA | 22BCS15410");
    printf("\033[0m"); // Reset text format

    return 0;
}
