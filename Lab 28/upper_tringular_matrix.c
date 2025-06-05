#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            printf("Element[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Upper Triangular Matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i <= j)
                printf("%d ", a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}