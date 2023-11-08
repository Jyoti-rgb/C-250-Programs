// ● Read and print elements of the array. – using recursion.
#include <stdio.h>

int readWrite(int a[100], int start, int len)
{
    if (start >= len)

        return;

    else

        printf("%d", a[start]);

    int readWrite(a, start + 1, len);
}

int main()
{
    int size, k, a[100];
    printf("Enter Size: ");
    scanf("%d", &size);

    printf("Input Elements: ");
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    k = readWrite(a[100], 0, size);
    printf("%d", k);
    return 0;
}