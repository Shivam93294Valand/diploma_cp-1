#include <stdio.h>

int main() {
    int num = 2;

    switch(num) {
        case 1:
            printf("Case 1\n");
        case 2:
            printf("Case 2\n");
        case 3:
            printf("Case 3\n");
        default:
            printf("Default case\n");
    }
    return 0;
}