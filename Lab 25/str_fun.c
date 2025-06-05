#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[200];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // strlen
    printf("Length of first string: %d\n", strlen(str1));

    // strcmp
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else if (cmp < 0)
        printf("First string is less than second string.\n");
    else
        printf("First string is greater than second string.\n");

    // strcpy
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // strcat
    strcat(str3, str2);
    printf("Concatenated string: %s\n", str3);

    //strrev
    strrev(str3);
    printf("Reversed string: %s\n", str3);

    //strupr
    strupr(str3);
    printf("Uppercase string: %s\n", str3);

    //strlwr
    strlwr(str3);
    printf("Lowercase string: %s\n", str3);
    return 0;
}