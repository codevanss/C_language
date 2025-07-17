// 1. Selection Sort with Comparison Count
#include <stdio.h>

int main() {
    int a[10] = {25, 5, 10, 4, 15, 20, 18, 12, 14, 7};
    int i, j, min, temp, comparisons = 0;

    for (i = 0; i < 9; i++) {
        min = i;
        for (j = i + 1; j < 10; j++) {
            comparisons++;
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    
    printf("\nTotal comparisons: %d\n", comparisons);
    return 0;
}