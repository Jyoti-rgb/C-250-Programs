// ● Sum of all array elements. – using recursion.
#include <stdio.h>

int sumElement(int size)
{
    int sum = 0, a[100];
    printf("Enter th Elements of Array.\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Sum of Total Element.\n");

    for (int i = 0; i < size; i++)
    {

        sum = sum + a[i];
    }
    return sum;
}
int main()
{
    int size, k;
    printf("Enter the size: ");
    scanf("%d", &size);
    k = sumElement(size);
    printf("%d", k);
    return 0;
}