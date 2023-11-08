// ● Insert An Element Desired or Specific Position In An Array

#include <stdio.h>
int main()
{
    int a[100], size, pos, item;
    printf("Insert An Element Desired or Specific Position\n");
    printf("Enter the size of Array: ");
    scanf("%d", &size);

    printf("Enter the Element: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter The Position: ");
    scanf("%d", &pos);
    printf("Enter The Item: ");
    scanf("%d", &item);

    for (int i = size; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = item;
    size++;
    printf("Final Array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}