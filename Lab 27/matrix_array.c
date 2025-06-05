#include <stdio.h>

int main() {
    int a[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Matrix is:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}