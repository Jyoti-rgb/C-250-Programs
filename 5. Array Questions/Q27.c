// 28. Right-rotate an array.

#include <stdio.h>
int main()
{
    int a[100], size, i, j, rotate, temp;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);

    printf("Enter %d Elements of Array.\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the Rotate Element: ");
    scanf("%d", &rotate);
    printf("Right Rotate Array\n");
    // for (j = 1; j <= rotate; j++)
    // {
    //     temp = a[size - 1];
    //     for (i = size - 1; i >= 1; i--)
    //     {
    //         a[i] = a[i - 1];
    //     }
    //     a[i] = temp;
    // }

    for (i = 1; i <= rotate; i++)
    {
        temp = a[size - 1];
        for (j = size - 1; j >= 1; j--)
        {
            a[j] = a[j - 1];
        }
        a[j] = temp;
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}