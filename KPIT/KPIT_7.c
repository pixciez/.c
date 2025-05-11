#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

void create() {
    char fname[50], text[MAX];
    FILE *fp;

    printf("Enter file name to create: ");
    scanf("%s", fname);
    
    fp = fopen(fname, "w");
    if (!fp) {
        printf("Error: Cannot create file.\n");
        return;
    }
    
    printf("Enter text (end with ~ on a new line):\n");
    while (fgets(text, MAX, stdin)) {
        if (text[0] == '~') break;
        fputs(text, fp);
    }
    
    fclose(fp);
    printf("File created successfully.\n");
}

void open() {
    char fname[50];
    FILE *fp;
    char ch;

    printf("Enter file name to open: ");
    scanf("%s", fname);
    
    fp = fopen(fname, "r");
    if (!fp) {
        printf("Error: File does not exist or cannot be opened.\n");
        return;
    }
    
    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    
    fclose(fp);
}

void edit() {
    char fname[50], text[MAX];
    FILE *fp;
    
    printf("Enter file name to edit: ");
    scanf("%s", fname);
    
    fp = fopen(fname, "a");
    if (!fp) {
        printf("Error: Cannot open file for editing.\n");
        return;
    }
    
    printf("Enter text to append (end with ~ on a new line):\n");
    while (fgets(text, MAX, stdin)) {
        if (text[0] == '~') break;
        fputs(text, fp);
    }
    
    fclose(fp);
    printf("File updated successfully.\n");
}

void save() {
    char fname[50];
    FILE *fp;

    printf("Enter file name to save: ");
    scanf("%s", fname);

    fp = fopen(fname, "r");
    if (!fp) {
        printf("Error: File does not exist.\n");
        return;
    }
    
    printf("File '%s' saved successfully.\n", fname);
    fclose(fp);
}

int main() {
    int ch;
    
    do {
        printf("\n1. Create File\n2. Open File\n3. Edit File\n4. Save File\n5. Exit\nChoose: ");
        scanf("%d", &ch);
        getchar();  // Clear the newline character from buffer
        switch (ch) {
            case 1: create(); break;
            case 2: open(); break;
            case 3: edit(); break;
            case 4: save(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Error: Invalid choice.\n");
        }
    } while (ch != 5);
    
    return 0;
}
