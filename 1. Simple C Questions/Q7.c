// ● Percentage of 5 Subjects

#include<stdio.h>

int main()
{
    float total,percentage;
    int eng, math, hindi, science, art;
    printf("Enter the number of 5 subject: ");
    scanf("%d%d%d%d%d", &eng, &math, &hindi, &science, &art);
    total = eng + math + hindi + science + art;
    printf("Total number of 5 subject: %.0f\n",total);
    percentage = total / 500 * 100;
    printf("Percentage of 5 subject: %.0f\n",percentage);


    return 0;
}