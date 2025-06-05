#include <stdio.h>

int main() {
    int r, c, count = 0;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);
    int a[r][c];
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0) count++;
        }
    if(count > (r * c) / 2)
        printf("Sparse matrix\n");
    else
        printf("Not a sparse matrix\n");
    return 0;
}