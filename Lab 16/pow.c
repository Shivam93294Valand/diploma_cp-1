#include <stdio.h>

int main() {
    int x, y, result = 1;
    printf("Enter base x and exponent y: ");
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= y; i++) {
        result *= x;
    }
    printf("x^y = %d\n", result);
    return 0;
}