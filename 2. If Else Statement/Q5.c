// ● Uppercase, Lowercase, Special Character, or Digit

#include<stdio.h>
int main()
{
    char c;
    int digit;
    printf("Enter the Key: ");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
    {
        printf("Uppercase Character: %c", c);
        }else if (c>= 97 && c<= 122)
        {
        printf("Lowercase Character: %c", c);
        }else if(c>= 48 && c<=58)
        {
        printf("This is Digits: %c", c);           
        }else{
        printf("Special Character: %c", c);           

        }
        
        return 0;
}