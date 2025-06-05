#include <stdio.h>

int main() {
    int a[3][3], pos = 0, neg = 0, zero = 0;
    printf("Enter 3x3 matrix:\n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] > 0) pos++;
            else if(a[i][j] < 0) neg++;
            else zero++;
        }
    printf("Positive: %d, Negative: %d, Zero: %d\n", pos, neg, zero);
    return 0;
}