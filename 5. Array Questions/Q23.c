// 24. Search an element in an array.

#include <stdio.h>
int main()
{
    int a[100], size, i, item;

    printf("Enter the Size: ");
    scanf("%d", &size);

    printf("Input Elements of First Array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the Item you want to search: ");
    scanf("%d", &item);
    for (i = 0; i < size; i++)
    {
        if (item == a[i])
        {
            printf("Found Element in Array: %d", item);
            return 0;
        }
    }
    printf("Not Found Element: %d", item);
}