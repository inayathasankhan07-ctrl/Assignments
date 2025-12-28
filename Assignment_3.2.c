#include <stdio.h>

int main() {
    int height = 7; // Height of the 'A'
    int width = 6;  // Base width of the 'A'
// A
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            // Top horizontal line
            if (i == 0 && (j > 0 && j < width - 1)) {
                printf("*");
            }
            // Left vertical line
            else if (j == 0 && i > 0) {
                printf("*");
            }
            // Right vertical line
            else if (j == width - 1 && i > 0) {
                printf("*");
            }
            // Middle horizontal line (crossbar)
            else if (i == height / 2 && (j > 0 && j < width - 1)) {
                printf("*");
            }
            // Spaces for empty areas
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    int rows=7;
// B
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) { // Adjust column limit for better 'B' shape
            if (j == 0 || // Left vertical line
                ((i == 0 || i == rows - 1 || i == rows / 2) && j < rows / 2 + 2) ||
                (j == rows / 2 + 2 && !(i == 0 || i == rows - 1 || i == rows / 2))) { 
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }
    printf("\n");

    int i, j;
// C
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {

            // Top horizontal line
            if (i == 0 && j > 0 && j < 6)
                printf("*");

            // Bottom horizontal line
            else if (i == 6 && j > 0 && j < 6)
                printf("*");

            // Left vertical line
            else if (j == 0 && i > 0 && i < 6)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // D
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 6; j++) {

            // Left vertical line
            if (j == 0)
                printf("*");

            // Top horizontal line
            else if (i == 0 && j < 5)
                printf("*");

            // Bottom horizontal line
            else if (i == 6 && j < 5)
                printf("*");

            // Right curve line
            else if (j == 5 && i > 0 && i < 6)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    //E
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 6; j++) {
            if (i==0) {
                printf("*");
            }
            else if (i==3) {
                printf("*");
            }
            else if (i==6) {
                printf("*");
            }
            else if(j==0) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // F
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 6; j++) {
            if (i==0) {
                printf("*");
            }
            else if (i==3) {
                printf("*");
            }
            else if(j==0) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // G
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {

            // Upper curve
            if (i == 0 && j > 0 && j < 5)
                printf("*");

            // Upper-left vertical line
            else if (j == 0 && i > 0 && i < 5)
                printf("*");

            // Lower curve
            else if (i == 5 && j > 0 && j < 5)
                printf("*");

            // Right vertical inside curve (for opening of G)
            else if (i >= 3 && i <= 4 && j == 5)
                printf("*");

            // Middle horizontal small bar
            else if (i == 3 && j >= 3 && j <= 5)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // H
    for(int i=0;i<5;i++) {
        for(int j=0;j<6;j++) {
            if(j==0 || j==5 || i==2) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    //I
    for(int i=0;i<6;i++) {
        for(int j=0;j<=6;j++) {
            if(i==0 || i==5 || j==3) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    //J
    for ( i = 0; i < 6; i++) {
        for ( j = 0; j <=6; j++) {
            if (i==0 || j==3) {
                printf("*");
            }
            else if ((i==5 && j==0) || (i==5 && j==1) || (i==5 && j==2)|| (i==4 && j==0)) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    //K
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

            // Left vertical line
            if (j == 0)
                printf("*");

            // Upper diagonal (top-right going)
            else if ((i + j == 4) && j!=1)
                printf("*");

            // Lower diagonal (bottom-right going)
            else if (i == j && i >= 2)
                printf("*");

            else if (i==2 && j==1) {
                printf("*");
            }
                
            else
                printf(" ");
        }
        printf("\n");
    }

    // L
    for ( i = 0; i < 6; i++) {
        for ( j = 0; j <=6; j++) {
            if (i==5 || j==0) {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");

    //M
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {

            // Left vertical line
            if (j == 0)
                printf("*");

            // Right vertical line
            else if (j == 6)
                printf("*");

            // Left diagonal inside
            else if (i == j && j <= 3)
                printf("*");

            // Right diagonal inside
            else if (i + j == 6 && j >= 3)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    //N
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {

            // Left vertical line
            if (j == 0)
                printf("*");

            else if (i == j && j<=5)
                printf("*");

            // Right vertical line
            else if (j == 6)
                printf("*");

            else{
                printf(" ");
            }

        }
        printf("\n");
    }

    //O
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 8; j++) {

            // Top horizontal line
            if (i == 0 && j > 0 && j < 7)
                printf("*");

            // Bottom horizontal line
            else if (i == 5 && j > 0 && j < 7)
                printf("*");

            // Left vertical line
            else if (j == 0 && i > 0 && i < 5)
                printf("*");

            // Right vertical line
            else if (j == 7 && i > 0 && i < 5)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    
    
    // P
    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 6; b++)
        {
            if (b == 1 ||
                (a == 1 && b <= 5) ||
                (a == 4 && b <= 5) ||
                (b == 6 && a > 1 && a < 4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    // Q
    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if ((a == 1 && b > 2 && b < 6) ||
                (a == 6 && b > 2 && b < 6) ||
                (b == 2 && a > 1 && a < 6) ||
                (b == 6 && a > 1 && a < 6) ||
                (a == 7 && b == 6))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    // R
    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 6; b++)
        {
            if (b == 1 ||
                (a == 1 && b <= 5) ||
                (a == 4 && b <= 5) ||
                (b == 6 && a > 1 && a < 4) ||
                (a > 4 && b == a - 3 + 2)) // diagonal leg
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    // S
    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if ((a == 1 && b > 1) ||
                (a == 4 && b < 5) ||
                (a == 7 && b > 1) ||
                (b == 1 && a > 1 && a < 4) ||
                (b == 5 && a > 4 && a < 7))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

     //T
    for ( i = 0; i < 5; i++) {
        for ( j = 0; j <=6; j++) {
            if (i==0 || j==3) {
                printf("*");
            }
            
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
       
        // U
    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (b == 1 || b == 5 || a == 7 && b > 1 && b < 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    // V
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b < a; b++)
        {
            printf(" ");
        }
        printf("*");

        for (int c = 1; c <= 2 * (5 - a) - 1; c++)
        {
            printf(" ");
        }

        if (a != 5)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // W
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if ((j == 0 || j == 8) || (j == 1 && i == 3) || 
            (j == 2 && i == 2) || (j == 3 && i == 1) || (j == 4 && i == 0) ||
             (j == 5 && i == 1) || (j == 6 && i == 2) || (j == 7 && i == 3))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    // X
    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if (b == a || b == 8 - a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    // Y
    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if ((b == a && a <= 4) || (b == 8 - a && a <= 4) || (b == 4 && a > 4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    // Z
    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if (a == 1 || a == 7 || b == 8 - a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
