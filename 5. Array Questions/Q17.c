// 18. Print all unique elements in the array.

#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], size, i, j;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter the Elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < size; i++)
    {
        int count = 1;
        if (arr1[i] != 0)
        {
            for (j = i + 1; j < size; j++)
            {
                if (arr1[i] == arr1[j])
                {
                    count++;
                    arr1[j] = 0;
                }
            }
            arr2[i] = count;
        }
    }

    printf("Unique Element of Array\n");
    for (i = 0; i < size; i++)
    {
        if (arr1[i] != 0)
        {
            if (arr2[i] == 1)
                printf("%d ", arr1[i]);
        }
    }
    return 0;
}