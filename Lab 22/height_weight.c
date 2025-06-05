#include <stdio.h>

int main() {
    float height[5], weight[5];
    int i, count = 0;

    for(i = 0; i < 5; i++) {
        printf("Enter height and weight of person %d: ", i + 1);
        scanf("%f %f", &height[i], &weight[i]);

        if(height[i] > 170 && weight[i] < 50)
            count++;
    }

    printf("Number of persons with height > 170 and weight < 50: %d\n", count);
    return 0;
}