#include <stdio.h>

int main() {
    int n, odd = 0, even = 0, val;
    printf("Enter size N: ");
    scanf("%d", &n);
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if(a[i][j] % 2 == 0) even++;
            else odd++;
        }
    printf("Odd: %d, Even: %d\n", odd, even);
    return 0;
}