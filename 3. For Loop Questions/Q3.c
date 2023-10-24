// ● Sort A Float Array In Ascending And Descending Order Using

#include <stdio.h>
#include <string.h>

int main()
{
    int arr[100], size, temp, flag1, flag2, strcmp();
    char *order;
    char *s1 = "Ascending";
    char *s2 = "Descending";
    printf("Enter Size of Array: "); // Array of Size
    scanf("%d", &size);

    printf("Enter Array Element: "); // input Elements of Array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sort in Ascending or Descending Enter:"); // Select Sort order
    scanf("%s", order);
    flag1 = strcmp(order, s1); // Compare Two String
    if (flag1 == 0)            // if Select Ascending order
    {

        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] > arr[j]) // if index 0>1 of array
                {
                    temp = arr[i]; // index swapping
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    flag2 = strcmp(order, s2);

    if (flag1 == 0) // if Select Descending order
        if (flag2 == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if (arr[j] < arr[i]) // if index 1<0 of array
                    {
                        temp = arr[i]; // Swapping Index
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}