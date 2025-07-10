#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    printf("Select operation to perform:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

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
