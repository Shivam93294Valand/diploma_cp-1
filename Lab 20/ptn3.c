#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {
        int val;

        if(i == 1 || i == 4 || i == 5)
            val = 1;
        else
            val = 0;

        for(j = 1; j <= i; j++) {
            printf("%d ", val);
            val = 1 - val;
        }
        printf("\n");
    }
    return 0;
}