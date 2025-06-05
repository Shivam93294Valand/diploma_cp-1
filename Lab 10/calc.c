#include <stdio.h>

int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Choose operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum = %d", a + b);
            break;
        case 2:
            printf("Difference = %d", a - b);
            break;
        case 3:
            printf("Product = %d", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Division = %.2f", (float)a / b);
            else
                printf("Error: Division by zero");
            break;
        default: printf("Invalid choice");
    }
    return 0;
}