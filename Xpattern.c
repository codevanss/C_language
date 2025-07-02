#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows (odd number recommended): ");
    scanf("%d", &rows);

    // Upper half including middle line
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (j == i || j == rows - i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
