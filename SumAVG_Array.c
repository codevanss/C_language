#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int sum = 0, i;
    float avg;

    for (i = 0; i < 6; i++)
        sum += arr[i];

    avg = (float)sum / 6;
    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}
