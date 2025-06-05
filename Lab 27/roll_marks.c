#include <stdio.h>

int main() {
    int students[20][2];
    for(int i=0; i<20; i++) {
        printf("Enter roll no and marks of student %d: ", i+1);
        scanf("%d%d", &students[i][0], &students[i][1]);
    }
    printf("Roll No\tMarks\n");
    for(int i=0; i<20; i++)
        printf("%d\t%d\n", students[i][0], students[i][1]);
    return 0;
}