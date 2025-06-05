#include <stdio.h>

int main() {
    int x, y, result = 1, i = 1;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);
    while (i <= y) {
        result *= x;
        i++;
    }
    printf("%d^%d = %d\n", x, y, result);
    return 0;
}