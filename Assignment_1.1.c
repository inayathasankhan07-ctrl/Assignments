#include <stdio.h>

int main() {
    int intVar = 42;
    float floatVar = 3.14f;
    char charVar = 'A';
    double doubleVar = 123.456789;

    printf("Value of intVar: %d\n", intVar);
    printf("Value of floatVar: %f\n", floatVar);
    printf("Value of charVar: %c\n", charVar);
    printf("Value of doubleVar: %lf\n", doubleVar);

    printf("\nSize of intVar: %lu bytes\n", sizeof(intVar));
    printf("Size of floatVar: %lu bytes\n", sizeof(floatVar));
    printf("Size of charVar: %lu byte\n", sizeof(charVar)); 
    printf("Size of doubleVar: %lu bytes\n", sizeof(doubleVar));
    return 0;
}
/* write a C program to declare variables of type in float character and double 
initialise them with values and print their values and sizes using size of operator*/