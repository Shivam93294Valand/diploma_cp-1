#include <stdio.h>

int main() {
    int num, i = 2;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(i < num) {
        if(num % i == 0)
            break;
        i++;
    }

    if(i == num)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    return 0;
}