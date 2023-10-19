// ● Check whether the triangle is an equilateral, isosceles or scalene triangle.

#include <stdio.h>
int main()
{
    int A, B, C, angle;
    printf("Enter the angles of Triangle: ");
    scanf("%d%d%d", &A, &B, &C);

    if (A == B && B == C)
    {
        printf("Triangle is Equilateral");
    }
    else if ((A == B) || (B == C) || (C == A))
    {
        printf("Triangle is Isosceles");
    }
    else
    {
        printf("Triangle is Scalene");
    }

    return 0;
}