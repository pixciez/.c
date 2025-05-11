#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, sum;

    for (num = 1; num <= 500; num++) {
        temp = num;
        sum = 0;

        while (temp) {
            remainder = temp % 10;
            sum += pow(remainder, 3);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
