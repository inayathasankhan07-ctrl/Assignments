#include <stdio.h>

// Function to swap two numbers using call by reference
void swap(int *x, int *y) {
    int temp;
    temp = *x;  // Store value of x in temp
    *x = *y;    // Assign value of y to x
    *y = temp;  // Assign temp (original x) to y
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Call swap function with addresses of a and b
    swap(&a, &b);

    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
