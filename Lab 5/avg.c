#include <stdio.h>

int main() {
    // without scanf
    float num1 = 10, num2 = 20, num3 = 30, avg;
    avg = (num1 + num2 + num3) / 3;
    printf("Average = %.2f\n", avg);

    // with scanf
    float num4, num5, num6, average1;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num4, &num5, &num6);

    average1 = (num4 + num5 + num6) / 3;
    printf("Average = %.2f\n", average1);
    return 0;
}