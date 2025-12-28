#include <stdio.h>

int main() {
    int x = 5;
    int y = 5;
    int result_pre, result_post;
    printf("Initial value of x: %d\n", x);
    printf("Initial value of y: %d\n", y);
    result_pre = ++x + 10;
    printf("Using pre-increment (++x):\n");
    printf("Expression: result_pre = ++x + 10;\n");
    printf("Value of x after pre-increment: %d\n", x);
    printf("Value of result_pre: %d\n", result_pre);
    result_post = y++ + 10;
    printf("Using post-increment (y++):\n");
    printf("Expression: result_post = y++ + 10;\n");
    printf("Value of y after post-increment: %d\n", y);
    printf("Value of result_post: %d\n\n", result_post);
    return 0;
}
//write a C program to demonstrate the difference between plus plus x pre increment
// and X + + post increment in an arithmetic expression