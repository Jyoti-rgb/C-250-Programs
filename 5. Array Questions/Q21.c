// 22. Find the reverse of an array.

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
    printf("Reverse of Array Elements\n");
    for (i = size - 1; i >= 0; i--)
    {

        printf("%d ", a[i]);
    }

    return 0;
}