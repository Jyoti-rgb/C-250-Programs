// ● Input the angles of a triangle and check whether the triangle is valid or not.

#include <stdio.h>
int main()
{
    int A, B, C, angle;
    printf("Enter the angles of Triangle: ");
    scanf("%d%d%d", &A, &B, &C);
    angle = A + B + C;
    if (angle == 180)
    {
        printf("Triangle is Valid");
    }
    else
    {
        printf("Triangle is Not Valid");
    }
    return 0;
}