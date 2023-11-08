// 25. Sort array elements in ascending or descending order.

#include <stdio.h>
int main()
{
    int a[100], b[100], c[100], size, i, j, temp = 0, temp1 = 0;

    printf("Enter the Size: ");
    scanf("%d", &size);

    printf("Input Elements of First Array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Ascending Array\n");
    for (i = 0; i < size; i++)
    {
        b[i] = a[i];
        printf("%d ", b[i]);
    }
    printf("\nDescending Array\n");
    for (i = size - 1; i >= 0; i--)
    {
        c[i] = b[i];
        printf("%d ", c[i]);
    }
    return 0;
}