#include <stdio.h>
/*
jump statements part 2
- goto
*/
// function to check even or not
// goto
void checkEvenOrNot(int num)
{
    if (num % 2 == 0)
        // jump to even
        goto even;
    else
        // jump to odd
        goto odd;

even:
    printf("\n%d is even", num);
    // return if even
    return;
odd:
    printf("\n%d is odd", num);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOrNot(num);
    return 0;
}