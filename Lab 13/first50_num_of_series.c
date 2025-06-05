#include <stdio.h>

int main() {
    int i = 0, term = 1;

    while (i < 50) {
        printf("%d ", term);
        term += 3;
        i++;
    }
    return 0;
}