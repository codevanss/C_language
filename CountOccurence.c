#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 2, 10, 8, 7, 10, 11};
    int count = 0, i;

    for (i = 0; i < 9; i++) {
        if (arr[i] == 10)
            count++;
    }

    printf("10 occurs %d times.\n", count);
    return 0;
}