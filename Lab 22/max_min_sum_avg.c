#include <stdio.h>

int main() {
    int a[100], n, i, max, min, sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for(i = 0; i < n; i++) {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
        sum += a[i];
    }

    avg = (float)sum / n;

    printf("Max: %d\nMin: %d\nSum: %d\nAvg: %.2f\n", max, min, sum, avg);
    return 0;
}