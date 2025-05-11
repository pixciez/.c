#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

Student db[MAX];
int count = 0;

void add() {
    if (count < MAX) {
        printf("Enter Name: ");
        scanf("%s", db[count].name);
        printf("Enter Roll No: ");
        scanf("%d", &db[count].roll);
        printf("Enter Marks (out of 100): ");
        scanf("%f", &db[count].marks);
        if (db[count].marks > 100 || db[count].marks < 0) {
            printf("Error: Marks should be between 0 and 100.\n");
            return;
        }
        count++;
    } else {
        printf("Error: Database full.\n");
    }
}

void display() {
    printf("\n%-10s %-10s %-10s\n", "Roll No", "Name", "Marks");
    printf("-----------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-10s %-10.2f\n", db[i].roll, db[i].name, db[i].marks);
    }
}

int search(int roll) {
    for (int i = 0; i < count; i++) {
        if (db[i].roll == roll) {
            return i;
        }
    }
    return -1;
}

void update() {
    int roll;
    printf("Enter Roll No to Update: ");
    scanf("%d", &roll);
    int idx = search(roll);
    if (idx != -1) {
        printf("Enter New Name: ");
        scanf("%s", db[idx].name);
        printf("Enter New Marks (out of 100): ");
        scanf("%f", &db[idx].marks);
        if (db[idx].marks > 100 || db[idx].marks < 0) {
            printf("Error: Marks should be between 0 and 100.\n");
            return;
        }
    } else {
        printf("Error: Student not found.\n");
    }
}

void del() {
    int roll;
    printf("Enter Roll No to Delete: ");
    scanf("%d", &roll);
    int idx = search(roll);
    if (idx != -1) {
        for (int i = idx; i < count - 1; i++) {
            db[i] = db[i + 1];
        }
        count--;
        printf("Student record deleted.\n");
    } else {
        printf("Error: Student not found.\n");
    }
}

int main() {
    int ch;
    do {
        printf("\n1. Add Student\n2. Display All\n3. Search\n4. Update\n5. Delete\n6. Exit\nChoose: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: add(); break;
            case 2: display(); break;
            case 3: {
                int roll;
                printf("Enter Roll No to Search: ");
                scanf("%d", &roll);
                int idx = search(roll);
                if (idx != -1) {
                    printf("\n%-10s %-10s %-10s\n", "Roll No", "Name", "Marks");
                    printf("-----------------------------\n");
                    printf("%-10d %-10s %-10.2f\n", db[idx].roll, db[idx].name, db[idx].marks);
                } else {
                    printf("Error: Student not found.\n");
                }
                break;
            }
            case 4: update(); break;
            case 5: del(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Error: Invalid choice.\n");
        }
    } while (ch != 6);

    return 0;
}
