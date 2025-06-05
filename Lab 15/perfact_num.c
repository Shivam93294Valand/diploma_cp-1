#include <stdio.h>

int main() {
    int num, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(i < num) {
        if(num % i == 0)
            sum += i;
        i++;
    }

    if(sum == num)
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");
    return 0;
}