// ● Character Is Vowel or Consonant

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Alphabets: ");
    scanf("%c", &ch);
    if(ch== 'a' || ch=='e' || ch =='i' || ch=='o'||ch=='u'||
       ch=='A' || ch== 'E' ||ch=='I' || ch=='O'||ch=='U')
        {
            printf("This is Vowel: %c", ch);
        
        }else
        {
            printf("This is Consonant: %c", ch);
        }
    return 0;
}