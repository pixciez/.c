
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// return_type func_name(data_type parameter_1 , data_type parameter_2 , ...)

/*
----------------- 4 TYPES ---------------------
- Without arguments and Without return value
- Without arguments and With return value
- With arguments and Without return value
- With arguments and With return value
*/

void duck();
int quack(); 
void water(char);
int sum(int a, int b);

int main()
{
    duck();
    water('d');
    quack();
    int res = sum(4, 4);
    printf("\nQuack is: %d", res);
    return 0;
}

void duck()
{
    printf("   __\n");
    printf("__\( o\)>\n");
    printf("\\____)\n");
}

int quack(){
    printf("\n----------- quacc!~ -----------\n");
}

void water(char w){
printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
printf("  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
printf("  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
}

int sum(int a, int b)
{
    return a + b;
}