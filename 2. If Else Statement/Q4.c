// ● A Character Is an Alphabet or Not


#include<stdio.h>
int main()
{
    char c;
    printf("Enter the Alphabet: ");
    scanf("%c", &c);
    if ((c>='a' && c<='z') || (c>='A'&& c<='Z'))
    {
        printf("This is Alphabet: %c", c);
    }
    else if(c>='0' && c<='0')
    {
        printf("This is Number: %c", c);

    }else{
        printf("This is not Alphabet: %c", c);

    }
    return 0;
}