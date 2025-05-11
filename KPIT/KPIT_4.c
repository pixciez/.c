#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
    char entered[MAX_SIZE];
    int count = 0;
    char ch;

    printf("Press 'q' or 'Q' to quit:\n");

    while ((ch = getchar()) != EOF) {
        if (ch == 'q' || ch == 'Q') break;

        if (ch != '\n' && ch != '\r') {
            if (isalpha(ch) && count < MAX_SIZE - 1) {
                entered[count++] = ch;
            } else {
                printf("Error 87: Please enter only alphabetic characters.\n");
            }
        }
    }

    entered[count] = '\0'; 

    printf("You entered: %s\n", entered);
    printf("Number of characters entered: %d\n", count);

    printf("\033[1;31m\x1B[10mASMI SHARMA | 22BCS15410\033[0m");

    return 0;
}
