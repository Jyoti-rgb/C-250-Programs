// ● Find Number Is Armstrong Or Not

#include <stdio.h>
int main()
{
    int num, remainder, arm = 0, userNum;
    printf("Input the Number: ");
    scanf("%d", &num);
    userNum = num;
    while (num > 0)
    {
        remainder = num % 10;
        arm = (remainder * remainder * remainder) + arm;
        num = num / 10;
    }
    if (userNum == arm)
    {
        printf("%d Is Armstrong Number.", userNum);
    }
    else
    {
        printf("%d Is Not Armstrong Number.", userNum);
    }

    return 0;
}