#include <stdio.h>

int main() {
    int i = 1, N;
    printf("Enter N: ");
    scanf("%d", &N);
    while (i <= N) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}