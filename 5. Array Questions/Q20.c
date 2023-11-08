// 21 . Merge two arrays to the third array.

#include <stdio.h>
int main()
{
    int a[100], b[100], c[100], size, i, j, len;

    printf("Enter the Size: ");
    scanf("%d", &size);

    printf("Input Elements of First Array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Input Elements of Second Array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &b[i]);
    }

    len = size + size;
    for (i = 0; i < size; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; i < size; i++)
    {
        c[size + i] = b[i];
    }
    printf("Merge Two Arrays\n");

    for (i = 0; i < len; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}