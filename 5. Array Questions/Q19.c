// 20. Delete all duplicate elements from an array

#include <stdio.h>
int main()
{
    int arr1[100], size, i, j;
    printf("Enter the Size: ");
    scanf("%d", &size);

    printf("Enter the Elements:\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr1[i] == arr1[j])
            {
                for (int k = j; k < size - 1; k++)
                {

                    arr1[k] = arr1[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    printf("After the Delete duplicate Elements\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}