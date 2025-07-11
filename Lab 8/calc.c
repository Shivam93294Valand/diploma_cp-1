#include <stdio.h>

int main() {
    float num1, num2, result;
    int operation;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &operation); 

    if (operation == '+') {
        result = num1 + num2;
        printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
    } else {
        if (operation == '-') {
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
        } else {
            if (operation == '*') {
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            } else {
                if (operation == '/') {
                    if (num2 != 0) {
                        result = num1 / num2;
                        printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                    } else {
                        printf("Error: Division by zero is not allowed.\n");
                    }
                } else {
                    printf("Invalid operation selected.\n");
                }
            }
        }
    }
    return 0;
}
