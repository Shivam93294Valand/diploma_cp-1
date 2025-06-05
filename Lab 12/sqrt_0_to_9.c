#include <stdio.h>
#include <math.h>

int main() {
    int i = 0;
    while (i < 10) {
        printf("Number: %d, Square root: %.2f\n", i, sqrt(i));
        i++;
    }
    return 0;
}