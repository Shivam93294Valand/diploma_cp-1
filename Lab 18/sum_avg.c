#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        if (num != 0) {
            sum += num;
            count++;
        }
    } while (num != 0);
    if (count > 0)
        printf("Sum = %d, Average = %.2f\n", sum, (float)sum / count);
    else
        printf("No numbers entered.\n");
    return 0;
}