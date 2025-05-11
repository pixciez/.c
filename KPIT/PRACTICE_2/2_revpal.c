#include <stdio.h>
#include <string.h>

int main() {
    char number[6], reverse[6];
    printf("Enter a five-digit number: ");
    scanf("%5s", number);

    if (strlen(number) != 5) {
        printf("ERROR 5! Enter a five-digit number.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
        reverse[i] = number[4 - i];
    reverse[5] = '\0';

    printf("Original number: %s\nReversed number: %s\n", number, reverse);
    printf(strcmp(number, reverse) == 0 ? "equal.\n" : "not equal.\n");

    return 0;
}
