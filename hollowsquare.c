#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' on the borders
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
