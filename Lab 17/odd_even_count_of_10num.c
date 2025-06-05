#include <stdio.h>

int main() {
    int num, count = 0, even = 0, odd = 0;
    do {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);
        if (num % 2 == 0)
            even++;
        else
            odd++;
        count++;
    } while (count < 10);
    printf("Even numbers: %d\nOdd numbers: %d\n", even, odd);
    return 0;
}