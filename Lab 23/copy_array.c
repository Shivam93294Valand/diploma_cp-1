#include <stdio.h>

int main() {
    int a[100], b[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        b[i] = a[i];

    printf("Copied array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);
    return 0;
}