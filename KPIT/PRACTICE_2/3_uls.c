// chk whether a character entered is in uppercase or lowercase or special char

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("The character '%c' is an uppercase letter.\n", ch);
    } else if (islower(ch)) {
        printf("The character '%c' is a lowercase letter.\n", ch);
    } else {
        printf("The character '%c' is a special character.\n", ch);
    }

    return 0;
}
