#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product, modulus;
    float division;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    division = (float)num1 / num2;
    modulus = num1 % num2;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Division: %.2f\n", division);
    printf("Modulus: %d\n", modulus);
    return 0;
}
//write a C program to input two integers and perform addition 
//subtraction multiplication division and modulus display the results