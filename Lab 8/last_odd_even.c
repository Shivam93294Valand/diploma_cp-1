#include <stdio.h>

int main() {
    int num, last_digit;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    last_digit = num % 10;

    if (last_digit % 2 == 0) {
        printf("The last digit %d is Even.\n", last_digit);
    }
    else {
        printf("The last digit %d is Odd.\n", last_digit);
    }
    return 0;
}