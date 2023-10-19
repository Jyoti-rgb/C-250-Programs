//  Simple Interest

#include<stdio.h>

int main()
{
    float P,R,T;
    printf("Enter the Principle: ");
    scanf("%f%f%f", &P,&R,&T);
    printf("Rate: %f%%\n", R);
    printf("Time: %f years\n",T);
    float SI = (P * R * T) / 100;
    printf("Simple Interest is: %.2f\n", SI);

    return 0;
}

