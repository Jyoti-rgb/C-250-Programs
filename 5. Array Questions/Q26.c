// 27. Left rotate an array.

#include <stdio.h>
int main()
{
    int a[100], size, i, j, rotate;
    printf("Enter the Array size: ");
    scanf("%d", &size);
    printf("Enter %d Elements of Array\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Rotate Element: ");
    scanf("%d", &rotate);
    printf("Left rotate Array\n");
    for (i = rotate; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    for (j = 0; j < rotate; j++)
    {
        printf("%d ", a[j]);
    }

    // for (i = 0; i < size; i++)
    // {
    //     printf("%d %d ", a[i], b[j]);
    // }

    return 0;
}