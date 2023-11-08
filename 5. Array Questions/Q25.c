// 26. Sort even and odd elements of the array separately.

#include <stdio.h>
int main()
{
    int a[100], b[100], c[100], size, i, j = 0, k = 0;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);

    printf("Enter the Elements\n");
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
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }
    printf("\nEven Number of Array\n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\nOdd Number of Array\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}