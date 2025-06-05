#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            printf("Element[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Diagonal elements: ");
    for(int i=0; i<n; i++) {
        printf("%d ", a[i][i]);
        sum += a[i][i];
    }
    printf("\nSum: %d\n", sum);
    return 0;
}