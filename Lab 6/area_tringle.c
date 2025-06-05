#include <stdio.h>

int main(){
    int height, base;
    float area;

    printf("Enter hight of tringle: ");
    scanf("%d",&height);
    printf("Enter base of tringle: ");
    scanf("%d",&base);
    area = (height * base) / 2;
    printf("Area of the tringle is: %.2f", area);
    return 0;
}
