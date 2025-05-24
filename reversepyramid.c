#include <stdio.h>

int main() {
    int i, j, space, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--) {
        // Print spaces
        for(space = 0; space < (rows - i); space++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
