#include <stdio.h>

int main() {
    float basic_salary, hra = 0, da = 0, gross_salary;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    if (basic_salary >= 30000) {
        hra = 0.30 * basic_salary;
        da = 0.95 * basic_salary;
    }
    else if (basic_salary >= 20000) {
        hra = 0.25 * basic_salary;
        da = 0.90 * basic_salary;
    }
    else if (basic_salary >= 10000) {
        hra = 0.20 * basic_salary;
        da = 0.80 * basic_salary;
    }
    else {
        printf("Basic salary is less than 10000. No HRA and DA applied.\n");
    }

    gross_salary = basic_salary + hra + da;
    printf("\nBasic Salary: %.2f\n", basic_salary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross_salary);
    return 0;
}