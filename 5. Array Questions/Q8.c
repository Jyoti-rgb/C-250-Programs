// ● Print all negative elements in an array.

#include <stdio.h>
int main()
{
    int n1, a[100], size;
    printf("Enter Size of Array: ");
    scanf("%d", &size);
    printf("Enter Element: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Select only Negative Value\n");
    for (int i = 0; i < size - 1; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}