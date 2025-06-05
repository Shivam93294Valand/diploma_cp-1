#include <stdio.h>

int main() {
    int n, i, count = 0;
    float sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    for(i = 0; i < n; i++) {
        if(arr[i] > avg)
            count++;
    }

    printf("Average = %.2f\n", avg);
    printf("Numbers higher than average: %d\n", count);
    return 0;
}