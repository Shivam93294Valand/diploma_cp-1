#include <stdio.h>

int main() {
    int a[100], n, i, j, count = 0, visited[100] = {0};

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        if(visited[i]) continue;

        for(j = i+1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }
    }

    printf("Total duplicate elements: %d\n", count);
    return 0;
}