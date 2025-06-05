#include <stdio.h>

int main() {
    int a[100], n, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 3 == 0)
            count++;
    }

    printf("Elements divisible by 3: %d\n", count);
    return 0;
}