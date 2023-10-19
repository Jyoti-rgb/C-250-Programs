// ● Area and Circumference of a Circle

#include<stdio.h>
int main()
{
    int radius;
    float Area,Circumference;
    float pi=3.14;
    printf("Enter the Radius of Circle:");
    scanf("%d", &radius);
    Area = pi * radius * radius;
    Circumference = 2*pi * radius;
    printf("Area of Circle is %.2f\n", Area);
    printf("Circumference of Circle is %.2f", Circumference);

    return 0;
}