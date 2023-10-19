// ● Find A Generic Root Of the Number

// ex: output->Num=12345 > 1+2+3+4+5=15,Num=16 > 1+6= 7

#include <stdio.h>
int main()
{
    int num, temp, rem, sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;  // Get Remainder ex:num=12345> rem=5
        sum = sum + rem;  // sum=0+5 > sum=5;
        temp = temp / 10; // temp=12345/10 > temp=1234
        if (temp == 0 && sum > 9)
        {
            temp = sum;
            sum = 0;
        }
    }
    printf("%d of Generic Root Number: %d", num, sum);
    return 0;
}
