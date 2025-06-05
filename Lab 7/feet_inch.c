#include <stdio.h>

int main(){
    float feet, inch;

    printf("Enter feet: ");
    scanf("%f", &feet);

    inch = feet * 12;
    printf("Inch: %.2f", inch);
    return 0;
}
