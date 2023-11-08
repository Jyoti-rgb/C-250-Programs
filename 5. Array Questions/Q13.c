#include <stdio.h>
int main()
{
    int arr1[] = {3, 6, 7, 8, 2, 9}, size;
    // printf("Enter the size of Array: ");
    // scanf("%d", &size);

    // printf("Enter the Element\n");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &arr1[i]);
    // }
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[len];
    for (int i = 0; i < len; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("Old Array\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nNew Array\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}