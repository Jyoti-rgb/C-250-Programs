// 15. Insert an element in an array.

#include <stdio.h>
int main()
{
    int arr[100], size, pos, element;
    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter Element\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Input Insert Element: ");
    scanf("%d", &element);

    printf("Enter Position of Array: ");
    scanf("%d", &pos);

    for (int i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    size++;
    printf("New Array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}