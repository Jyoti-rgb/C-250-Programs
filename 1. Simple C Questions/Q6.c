//  Gross Salary of an Employee

#include<stdio.h>

int main()
{
    char name;
    float b_salary, Hra, Da, Ta, GS;
    printf("Enter the Name: ");
    scanf("%s", &name);
    printf("Enter the Basic Salary: ");
    scanf("%f", &b_salary);
    Hra = (b_salary * 5) / 100;
    Da = (b_salary * 3) / 100;
    Ta = (b_salary * 2) / 100;
    GS = b_salary + Hra + Da + Ta;
    printf("Name: %s \nBasic Salary: %.1f \nHra: %.1f\nDa: %.1f\nTa: %.1f\nGross Salary: %.1f\n",&name,b_salary,Hra,Da,Ta,GS);
    return 0;
}