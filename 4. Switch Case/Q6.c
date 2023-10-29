// ● Remove All Vowels From A String
#include <stdio.h>
#include <string.h>
int main()
{
    char para[100];
    int length = 0;
    printf("String is: ");
    gets(para);
    printf("Remove All Vowels From String.\n");

    length = strlen(para);
    for (int i = 0; i < length; i++)
    {

        switch (para[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            for (int j = i; j < length; j++)
            {

                para[j] = para[j + 1];
            }
            length--;
            break;
        }
    }

    printf("After Remove all Vowels from  string: %s", para);

    return 0;
}
