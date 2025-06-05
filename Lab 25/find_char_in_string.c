#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int found = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to find: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character '%c' found at position %d\n", ch, i);
            found = 1;
        }
    }

    if (!found) {
        printf("Character '%c' not found in the string.\n", ch);
    }
    return 0;
}