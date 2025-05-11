#include <stdio.h>

// Function Declaration
void printStr(char str[]);

// Main Function
int main()
{
    // Variable Declaration
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[6] = "harry";
    char str[34];

    // User Input
    printf("give input: ");
    gets(str);

    // Output Using Custom Function printStr
    printf("--- Using Custom Function printStr ---\n");
    printStr(str);

    // Output Using printf
    printf("\n--- Using printf ---\n");
    printf("%s\n", str);

    // Output Using puts
    printf("\n--- Using puts ---\n");
    puts(str);

    return 0;
}

// Function Definition
void printStr(char str[])
{
    // Iterate and print each character until null character '\0'
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
