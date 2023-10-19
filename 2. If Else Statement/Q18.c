// ● Check whether a year is a leap year or not.
// with Ternary Operator

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);
    ((year % 4 == 0) ? (year % 100 == 0)
                           ? (year % 400 == 0)
                                 ? printf("Leap Year")
                                 : printf("Not Leap Year")
                           : printf(" Leap Year")
                     : printf("Not Leap year"));
    return 0;
}