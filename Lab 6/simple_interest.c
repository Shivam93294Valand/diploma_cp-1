#include <stdio.h>

int main() {
    int principal, interest, time_period;
    float si;

    printf("Enter principal: ");
    scanf("%d", &principal);
    printf("Enter interest: ");
    scanf("%d", &interest);
    printf("Enter time period: ");
    scanf("%d", &time_period);

    si = principal * interest * time_period / 100;
    printf("Simple Interest: %.2f",si);
    return 0;
}