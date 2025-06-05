#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    do {
        if (n % i == 0) {
            sum -= i;
        }
        else {
            sum += i;
        }
        i++;
    } while (i <= n);
    printf("Sum = %d\n", sum);
    return 0;
}