// ● LCM of Two Numbers

#include <stdio.h>

int main()
{
    int n1, n2, L;
    printf("Enter the Two Number: ");
    scanf("%d%d", &n1, &n2);
    L = n1 > n2 ? n1 : n2;
    for (L = L; L <= n1 * n2; L = L + (n1 > n2 ? n1 : n2))
        if (L % n1 == 0 && L % n2 == 0)
            break;
    printf("LCM is: %d", L);
    return 0;
}