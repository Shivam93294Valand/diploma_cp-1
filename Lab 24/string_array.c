#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    printf("You entered: %s\n", str);
    printf("Length of string = %lu\n", strlen(str));

    return 0;
}