// 12. Count the total number of even and odd elements in an array.

#include <stdio.h>
int main()
{
    int a[100], size, i;
    printf("Enter the Size: ");
    scanf("%d", &size);

    printf("Enter %d Element of Array: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total Number of Even in array: %d\n", even);
    printf("Total Number of Odd in array: %d", odd);
    return 0;
}
