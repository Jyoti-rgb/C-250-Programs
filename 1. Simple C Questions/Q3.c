// ● Area of Triangle

#include<stdio.h>

int main()
{
    int base, height;

    printf("Enter the base of triangle: ");
    scanf("%d", &base);
    printf("Enter the height of triangle: ");
    scanf("%d", &height);
    int area = (base * height)/2;
    printf("Area of Triangle is: %d\n", area);
    return 0;
}