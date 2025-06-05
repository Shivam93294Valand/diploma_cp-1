#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    do {
        count++;
    } while (temp > 0);

    do {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    } while (temp > 0);
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}