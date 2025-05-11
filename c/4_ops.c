
#include <stdio.h>

int main()
{

    int a = 25, b = 5;

    // arithmetic

    printf("----------- ARITHMETIC ------------\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a % b = %d\n", a % b);
    printf("-----------------------------------\n\n");

    // unary

    printf("------------- UNARY ----------------\n");
    printf("++a = %d\n", ++a);
    printf("-+a = %d\n", --a);
    printf("a++ = %d\n", a++);
    printf("a-- = %d\n", a--);
    printf("-----------------------------------\n\n");

    // relational

    printf("----------- RELATIONAL ------------\n");
    printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);
    printf("a == b: %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("------------------------------------\n\n");

    // logical

    printf("----------- LOGICAL ----------------\n");
    printf("a && b : %d\n", a && b);
    printf("a || b : %d\n", a || b);
    printf("!a: %d\n", !a);
    printf("------------------------------------\n\n");

    // bitwise

    printf("------------ BITWISE ---------------\n");
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("a >> b: %d\n", a >> b);
    printf("a << b: %d\n", a << b);
    printf("------------------------------------\n\n");

    // assignment

    printf("----------- ASSIGNMENT -------------\n");
    printf("a = b: %d\n", a = b);
    printf("a += b: %d\n", a += b);
    printf("a -= b: %d\n", a -= b);
    printf("a *= b: %d\n", a *= b);
    printf("a /= b: %d\n", a /= b);
    printf("a %%= b: %d\n", a %= b);
    printf("a &= b: %d\n", a &= b);
    printf("a |= b: %d\n)", a |= b);
    printf("a >>= b: %d\n", a >> b);
    printf("a <<= b: %d\n", a << b);
    printf("-----------------------------------\n\n");

    // misc

    printf("-------------- MISC ---------------\n");
    int num = 10;
    int *address = &num;

    printf("sizeof(num) = %d bytes\n", sizeof(num));
    printf("&num = %p\n", &num);
    printf("address of num = %d\n", address);
    printf("num from address = %d\n", *address);
    printf("-----------------------------------\n\n");

    // ternary

    printf("------------ TERNARY -------------\n");
    printf("(10 < 5) ? 10 : 20 = %d\n", (10 < 5) ? 10 : 20);
    printf("(float)num = %f\n", (float)num);
    printf("-----------------------------------\n\n");

    return 0;
}
