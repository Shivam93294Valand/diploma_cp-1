#include <stdio.h>

int main() {
    int day, week, year;

    printf("Enter no. of  days: ");
    scanf("%d", &day);

        year = day / 365;
        day = day % 365;

        week = day / 7;
        day = day % 7;

    printf("%d year, %d week and %d day", year, week, day);
    return 0;
}