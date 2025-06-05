#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5, total, percentage;

    printf("Enter marks for 5 subjects:\n");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5;
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage > 70) {
        printf("Class: Distinction\n");
    }
    else if (percentage > 60) {
        printf("Class: First Class\n");
    }
    else if (percentage > 45) {
        printf("Class: Second Class\n");
    }
    else if (percentage > 35) {
        printf("Class: Pass Class\n");
    }
    else {
        printf("Class: Fail\n");
    }
    return 0;
}
