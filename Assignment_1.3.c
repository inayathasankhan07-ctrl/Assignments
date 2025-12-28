#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    if (number > 10 && number < 50) {
        printf("The number %d is greater than 10 and less than 50.\n", number);
    } else {
        printf("The number %d does not meet the criteria (is not between 10 and 50).\n", number);
    }
    return 0;
}
