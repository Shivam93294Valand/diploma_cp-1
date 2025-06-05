#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        printf("Number: %d, Square: %d\n", i, i * i);
        i++;
    }
    return 0;
}