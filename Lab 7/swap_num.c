#include <stdio.h>

int main() {
    int num1, num2, num3, num4, temp;


    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before Swapping: num1 = %d num2 = %d", num1, num2);

    //without temp variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\nAfter Swapping: num1 = %d num2 = %d", num1, num2);

    printf("\nEnter two numbers: ");
    scanf("%d %d", &num3, &num4);
    printf("Before Swapping: num3 = %d num4 = %d", num3, num4);

    //with temp variable
    temp = num3;
    num3 = num4;
    num4 = temp;
    printf("\nAfter Swapping: num3 = %d num4 = %d", num3, num4);
    return 0;
}
