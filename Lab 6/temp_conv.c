#include <stdio.h>

int main() {
    float f, c;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = ((f-32.0) * 5.0) / 9.0;
    printf("The temperature in celsius: %.2f", c);
    return 0;
}