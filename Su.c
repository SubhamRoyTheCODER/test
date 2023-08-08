#include <stdio.h>

int main() {
    int rows = 5; // number of rows in the pyramid

    for (int i = 1; i <= rows; i++) { // loop through each row
        for (int j = 1; j <= rows - i; j++) { // loop through each space before the stars
            printf(" "); // print a space
        }
        for (int k = 1; k <= i * 2 - 1; k++) { // loop through each star
            printf("*"); // print a star
        }
        printf("\n"); // move to the next line
    }

    return 0;
}
