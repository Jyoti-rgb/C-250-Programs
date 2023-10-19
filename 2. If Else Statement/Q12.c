// ● Voting Eligibility Checker

#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are Eligible for Voting.");
    }
    else
    {
        printf("Oops..Sorry Dear you are not  Eligible for Voting.");
    }

    return 0;
}