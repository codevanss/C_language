#include <stdio.h>

int main() {
    int i, j, rows;

    // Ask user for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        // New line after each row
        printf("\n");
    }

    return 0;
}
