// 16. Delete an element from an array at the specified position.

#include <stdio.h>
int main()
{
    int arr[100], size, delete, pos, i;
    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter the Elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("Input Delete Item: ");
    // scanf("%d", &delete);
    printf("Input Position: ");
    scanf("%d", &pos);

    for (i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[pos])
        {
            arr[i] = arr[i + 1];
        }
    }
    size--;
    i--;
    printf("After delete item \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}