#include <stdio.h>

int main() {
    int radious;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radious);
    printf("Area of the circle = %.2f\n", radious * radious * 3.14);
    return 0;
}