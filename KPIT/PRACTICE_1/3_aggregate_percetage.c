/*
 If the marks obtained by a student in five different subjects are input through the keyboard, 
 find out the aggregate marks and percentage marks obtained by the student. 
 Assume that the maximum marks that can be obtained by a student in each subject is 100.
*/

#include <stdio.h>

int main() {
    int marks[5], i, sum = 0;
    float percentage;
    
    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    
    percentage = (float)sum / 5;
    
    printf("Aggregate marks: %d\n", sum);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}