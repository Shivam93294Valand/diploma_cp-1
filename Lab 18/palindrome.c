#include <stdio.h>

int main() {
    int num, rev = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    do {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    } while (temp > 0);
    if (rev == num)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}