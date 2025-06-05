#include <stdio.h>

int main() {
    // without scanf
    int num1 = 10, num2 = 20, sum;
    sum = num1 + num2;
    printf("Sum = %d\n", sum);

    // with scanf
    int num3, num4, sum2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num3, &num4);

    sum2 = num3 + num4;
    printf("Sum = %d\n", sum2);

    return 0;
}