#include <stdio.h>

int main() {
    int a[100], n, i, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Array after swapping:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}