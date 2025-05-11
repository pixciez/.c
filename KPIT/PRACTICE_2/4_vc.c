#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    char lowerCh = tolower(ch);
    int isVowel = (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u');

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%s.\n", isVowel ? "vowel" : "consonant");
    } else {
        printf("The character '%c' is not an alphabetic character.\n", ch);
    }

    return 0;
}
