// 11. Get the second largest element in an array.

#include <stdio.h>
int main()
{
    int a[100], size;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter %d Element of Array: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int max1 = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max1)
        {
            max1 = a[i];
        }
    }
    printf("First Max Value: %d\n", max1);
    int max2 = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max2)
        {
            if (a[i] < max1)
            {
                max2 = a[i];
            }
        }
    }
    printf("Second Last Value: %d", max2);
    return 0;
}