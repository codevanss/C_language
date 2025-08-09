// 16. Find Location of First Odd Number
#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 9, 10}, i;

    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {
            printf("First odd number %d at index %d\n", arr[i], i);
            break;
        }
    }
    return 0;
}