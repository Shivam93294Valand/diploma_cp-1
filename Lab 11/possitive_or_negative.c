#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    (num >= 0) ? printf("Positive number\n") : printf("Negative number\n");
    return 0;
}