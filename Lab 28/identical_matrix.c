#include <stdio.h>

int main() {
    int r, c, flag = 1;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);
    int a[r][c], b[r][c];

    printf("Enter elements of first matrix:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of second matrix:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
            if(b[i][j] != a[i][j]) flag = 0;
        }

    if(flag) printf("Matrices are identical.\n");
    else printf("Matrices are not identical.\n");
    return 0;
}