// ● Input any alphabet and check whether it is a vowel or consonant.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Any Alphabet: ");
    scanf("%ch", &ch);
    // check Vowel or Consonant
    // with Ternary Operator
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        ? printf("%c is Vowel.", ch)
        : printf("%c is Consonant", ch);
    return 0;
}