#include <stdio.h>

int main() {
    int x = 2, n = 5, result = 1;

    while (n > 0) {
        result *= x;
        n--;
    }

    printf("Result = %d\n", result);
    return 0;
}
