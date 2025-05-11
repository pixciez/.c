/*
 In a town, the percentage of men is 52. 
 The percentage of total literacy is 48. 
 If total percentage of literate men is 35 of the total population, 
 write a program to find the total number of illiterate men and women if the population of the town is 80,000.
*/

#include <stdio.h>

int main() {
    int population = 80000;
    int total_men, total_women, literate_men, literate_women, illiterate_men, illiterate_women;
    
    total_men = population * 0.52;
    total_women = population - total_men;
    
    literate_men = population * 0.35;
    literate_women = population * 0.48 - literate_men;
    
    illiterate_men = total_men - literate_men;
    illiterate_women = total_women - literate_women;
    
    printf("Illiterate men: %d\n", illiterate_men);
    printf("Illiterate women: %d\n", illiterate_women);
    
    return 0;
}