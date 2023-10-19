// ● Converting Temperature Celsius into Fahrenheit

#include<stdio.h>

int main()
{
    float c, f;
    printf("Put the Celsius Temperature: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Converting Temperature Celsius into Fahrenheit: %.1f f\n", f);
    return 0;
}