#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int start = 1;

    for (int i = 1; i <= rows; i++) {
        int num = start;
        for (int j = 0; j < i; j++) {
            printf("%d ", num);
            num -= (i - j);
        }
        printf("\n");
        start++;
    }

    return 0;
}
