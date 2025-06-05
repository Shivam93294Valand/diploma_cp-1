#include <stdio.h>

int main() {
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    int flag = (a > b) ? 1 : 2;

    switch (flag) {
        case 1:
            largest = a;
            break;
        case 2:
            largest = b;
            break;
    }

    printf("Result = %d", largest * c);
    return 0;
}