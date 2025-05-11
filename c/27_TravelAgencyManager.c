#include <stdio.h>

struct Driver
{
    char name[50];
    char licenseNumber[20];
    char route[50];
    float distance;
};

int main()
{
    int n;
    printf("Enter the number of drivers: ");
    scanf("%d", &n);

    struct Driver drivers[n];

    for (int i = 0; i < n; i++)
    {
        printf("---------------------");
        printf("\nEnter details for Driver %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", drivers[i].name);
        printf("Driving License Number: ");
        scanf("%s", drivers[i].licenseNumber);
        printf("Route: ");
        scanf("%s", drivers[i].route);
        printf("Kms: ");
        scanf("%f", &drivers[i].distance);
        printf("---------------------\n");
    }

    printf("\n                                 Driver Details\n");
    printf("-------------------------------------------------------------------------------------\n");
    printf("|%-20s|%-20s|%-20s|%-20s|\n", "Name", "License Number", "Route", "Distance (Kms)");
    for (int i = 0; i < n; i++)
    {
        printf("|%-20s|%-20s|%-20s|%-20.2f|\n", drivers[i].name, drivers[i].licenseNumber, drivers[i].route, drivers[i].distance);
    }

    return 0;
}
