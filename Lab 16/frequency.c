#include <stdio.h>

int main() {
    int num, temp, i, count;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (i = 0; i <= 9; i++) {
        count = 0;
        temp = num;

        while (temp > 0) {
            if (temp % 10 == i) {
                count++;
            }
            temp /= 10;
        }

        printf("%d: %d\n", i, count);
    }

    return 0;
}