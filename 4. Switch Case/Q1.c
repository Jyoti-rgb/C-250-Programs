// ● Temperature Conversion Celsius To Fahrenheit And Vice Versa

#include <stdio.h>
int main()
{
    int choice;
    float c, f, temp;
    printf("Enter the Temperature in Celsius: ");
    scanf("%f", &temp);
    printf("1. Conversion Celsius To Fahrenheit.\n");
    printf("2. Conversion Fahrenheit To Celsius.\n");
    scanf("%d", &choice);
    switch (choice)
    {

    case 1:
        f = (temp * 9 / 5) + 32;
        printf("Temperature Fahrenheit is: %.1f", f);
        break;
    case 2:
        c = (temp - 32) * 5 / 9;

        printf("Temperature Celsius is: %.1f", c);
        break;

    default:
        printf("Invalid");
        break;
    }

    return 0;
}