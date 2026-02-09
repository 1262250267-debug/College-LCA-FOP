#include <stdio.h>

int main() {
    float basic_pay, hra, ta, gross_salary, prof_tax, net_salary;

    printf("Enter the Basic Pay of the employee: ");
    scanf("%f", &basic_pay);

    // Calculations based on provided percentages
    hra = 0.10 * basic_pay;        // 10% HRA
    ta = 0.05 * basic_pay;         // 5% TA
    gross_salary = basic_pay + hra + ta;

    prof_tax = 0.02 * gross_salary; // 2% Professional Tax on gross
    net_salary = gross_salary - prof_tax;

    printf("\n--- Salary Statement ---\n");
    printf("Basic Pay:      %.2f\n", basic_pay);
    printf("HRA (10%%):      %.2f\n", hra);
    printf("TA (5%%):        %.2f\n", ta);
    printf("--------------------------\n");
    printf("Gross Salary:   %.2f\n", gross_salary);
    printf("Prof. Tax (2%%): %.2f\n", prof_tax);
    printf("--------------------------\n");
    printf("Net Payable:    %.2f\n", net_salary);

    return 0;
}