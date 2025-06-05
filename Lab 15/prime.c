#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i = 2;
    bool flag = false;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(i < num) {
        if(num % i == 0)
            flag = true;
            break;
        i++;
    }

    if(flag  == true)
        printf("Not Prime\n");
    else
        printf("Prime Number\n");

    return 0;
}