// ● Remove Duplicates Items In An Array

#include <stdio.h>
int main()
{
    int a[100], size, length;
    printf("Insert An Element Desired or Specific Position\n");
    printf("Enter the size of Array: ");
    scanf("%d", &size);

    printf("Enter the Element: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // check Duplicate Element

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < size; k++)
                {
                    a[k] = a[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    printf("After Remove Duplicate Element\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}