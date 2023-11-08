// 23. Put even and odd elements of an array in two separate arrays.

#include <stdio.h>
int main()
{
    int a[100], b[100], c[100], size, i, j = 0, k = 0;

    printf("Enter the Size: ");
    scanf("%d", &size);

    printf("Input Elements of First Array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j] = a[i];
            j++;
            // printf("Even number %d \n", a[i]);
        }
        else
        {
            c[k] = a[i];
            // printf("Odd number %d \n", a[i]);
            k++;
        }
    }
    printf("Original Array\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEven Elements of Array\n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\nOdd Elements of Array\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}