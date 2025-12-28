#include <stdio.h>

int main() {
    int i, j;
    int height = 5;

    // Letter I
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height - 1 || j == height / 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // printf("\n");
    }
    // printf("\n");

    // Letter N
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (j == 0 || j == height - 1 || i == j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // printf("\n");
    }
    // printf("\n");

    // Letter A
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (j == 0 || j == height - 1 || i == 0 || i == height / 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // printf("\n");
    }
    // printf("\n");

    // Letter Y
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i < height / 2 && (j == i || j == height - 1 - i)) || (i >= height / 2 && j == height / 2)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // printf("\n");
    }
    // printf("\n");

    // Letter A (again)
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (j == 0 || j == height - 1 || i == 0 || i == height / 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // printf("\n");
    }
    // printf("\n");

    // Letter T
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || j == height / 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // printf("\n");
    }
    // printf("\n");

    return 0;
}
