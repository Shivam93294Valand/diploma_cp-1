#include <stdio.h>

int main() {
    int a[10][10], b[10][10], m, n, p, q, res[10][10] = {0};
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d%d", &m, &n);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d%d", &p, &q);
    if(n != p) {
        printf("Multiplication not possible.\n");
        return 0;
    }
    printf("Enter elements of Matrix A:\n");
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of Matrix B:\n");
    for(int i=0; i<p; i++)
        for(int j=0; j<q; j++){
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    for(int i=0; i<m; i++)
        for(int j=0; j<q; j++)
            for(int k=0; k<n; k++)
                res[i][j] += a[i][k] * b[k][j];

    printf("Resultant Matrix:\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<q; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}