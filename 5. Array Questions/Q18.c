// 19. Count the total number of duplicate elements in an array.
#include <stdio.h>
int main()
{
    int arr[100], size, i, j, duplicate = 0;
    printf("Enter the Size: ");
    scanf("%d", &size);

    printf("Enter the Elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate++;
                break;
            }
        }
    }

    printf("Count total number of duplicates Elements\n");
    printf("%d", duplicate);
    return 0;
}