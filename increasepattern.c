#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Calculate the starting number for the last row
    int start = 1;
    for (int i = 1; i <= rows; i++) {
        start++;
    }

    start--; // Because it gets incremented one extra time

    // Print reverse pattern
    for (int i = rows; i >= 1; i--) {
        int num = start;
        for (int j = 0; j < i; j++) {
            printf("%d ", num);
            num -= (i - j);
        }
        printf("\n");
        start--;
    }

    return 0;
}
