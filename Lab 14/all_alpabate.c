#include <stdio.h>

int main() {
    char ch = 'A';
    printf("Uppercase Letters: ");
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }
    ch = 'a';
    printf("\nLowercase Letters: ");
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");
    return 0;
}