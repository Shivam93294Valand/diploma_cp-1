#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    float avg;
    printf("Enter 0 for stop input:\n");

    while(num != 0) {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
        count++;
    }

    avg = (float)sum / count;
    printf("Sum = %d, Average = %.2f\n", sum, avg);
    return 0;
}