// ● Delete Element From Array At Desired Or Specific Position

#include <stdio.h>
int main()
{
    int a[100], size, delete, i;
    printf("Enter the Size: ");
    scanf("%d", &size);
    printf("Enter Elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Which element you want to Delete: ");
    scanf("%d", &delete);
    for (int i = 0; i < size - 1; i++)
    {
        if (a[i] == delete)
        {
            a[i] = a[i + 1];
        }
    }
    size--;
    i--;
    printf("After Delete Element\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}