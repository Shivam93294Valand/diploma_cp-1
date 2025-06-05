#include <stdio.h>

int main() {
    int a[100], n, i, val, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for(i = n - 1; (i >= 0 && a[i] > val); i--) {
        a[i + 1] = a[i];
    }

    a[i + 1] = val;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}