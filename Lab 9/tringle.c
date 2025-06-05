#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
        printf("Right-angled Triangle\n");
    }
    else if(a == b && b == c){
        printf("Equilateral Triangle\n");
    }
    else if(a == b || b == c || a == c) {
        printf("Isosceles Triangle\n");
    }
    else{
        printf("Scalene Triangle\n");
    }
    return 0;
}
