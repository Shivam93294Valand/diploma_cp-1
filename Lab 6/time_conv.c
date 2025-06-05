#include <stdio.h>

int main() {
    int sec, min, hour;

    printf("Enter time in seconds: ");
    scanf("%d", &sec);

        hour = sec / 3600;
        sec = sec % 3600;

        min = sec / 60;
        sec = sec % 60;

    printf("Time : %d:%d:%d", hour, min, sec);
    return 0;
}