#include <stdio.h>

int main() {
    int num, i = 2, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) isPrime = 0;
    else {
        do {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        } while (i <= num / 2);
    }
    printf("%d is %sprime.\n", num, isPrime ? "" : "not ");
    return 0;
}