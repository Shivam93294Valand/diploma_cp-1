#include <stdio.h>

int main() {
    int a[100], n, max1, max2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Need at least two elements.\n");
        return 0;
    }

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if(a[0] > a[1]) {
        max1 = a[0];
        max2 = a[1];
    } else {
        max1 = a[1];
        max2 = a[0];
    }

    for(int i = 2; i < n; i++) {
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if(a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    printf("Two largest elements: %d and %d\n", max1, max2);
    return 0;
}