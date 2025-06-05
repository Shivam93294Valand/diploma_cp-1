#include <stdio.h>

int main() {
    int num, first, last;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    do {
        first = num % 10;
        num /= 10;
    } while (num > 0);
    printf("Sum of first and last digit = %d\n", first + last);
    return 0;
}