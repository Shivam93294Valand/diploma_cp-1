#include <stdio.h>

int main() {
    int a[] = {1, 2, 4, 5, 7, 8, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int i, j = 0;

    printf("Missing numbers in the sequence:\n");
    for(i = 1; i <= 10; i++) {
        if(j < n && a[j] == i) {
            j++;
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}