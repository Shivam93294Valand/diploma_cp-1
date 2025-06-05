#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0, geo = 1, harm = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter %d positive numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
        geo *= arr[i];
        harm += 1 / arr[i];
    }

    float avg = sum / n;
    float gmean = pow(geo, 1.0/n);
    float hmean = n / harm;

    printf("Arithmetic Mean = %.2f\n", avg);
    printf("Geometric Mean = %.2f\n", gmean);
    printf("Harmonic Mean = %.2f\n", hmean);
    return 0;
}