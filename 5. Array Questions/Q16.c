// 17. Count the frequency of each element in an array.

#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], size, i, j;
    printf("Enter the Size: ");
    scanf("%d", &size);
    printf("Enter the Element\n");
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

    printf("Array of Element Frequency.\n");

    for (i = 0; i < size; i++)
    {
        if (arr1[i] != 0)
        {
            printf("no of %d is %d \n", arr1[i], arr2[i]);
        }
    }
    return 0;
}