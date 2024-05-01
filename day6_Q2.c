#include <stdio.h>

void main() {
    float basic_salary, HRA, DA, TA, gross_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter the HRA percentage: ");
    scanf("%f", &HRA);

    printf("Enter the DA percentage: ");
    scanf("%f", &DA);

    printf("Enter the TA percentage: ");
    scanf("%f", &TA);

    HRA = (basic_salary * HRA) / 100;
    DA = (basic_salary * DA) / 100;
    TA = (basic_salary * TA) / 100;

    gross_salary = basic_salary + HRA + DA + TA;

    printf("Gross Salary is: Rs. %.2f\n", gross_salary);

}