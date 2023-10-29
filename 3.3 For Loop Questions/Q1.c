// ● Generate IP (Internet Protocol) Addresses Using
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void main()
{
    int IP, V, ipv4 = 0;
    char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    char ipv6;
    printf("Enter How Many IP Address you want to print: ");
    scanf("%d", &IP);
    printf("What you want IPV4 or IPV6 Enter: ");
    scanf("%d", &V);
    switch (V)
    {
    case 4:
        srand(time(NULL));
        for (int i = 0; i < IP; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                ipv4 = rand() % 255;
                printf("%d", ipv4);
                if (j < 3)

                    printf(".");
            }
            printf("\n");
        }
        break;
    case 6:
        srand(time(NULL));
        for (int i = 0; i < IP; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    ipv6 = arr[rand() % 16];
                    printf("%c", ipv6);
                }
                if (j < 7)

                    printf(".");
            }
            printf("\n");
        }
        break;

    default:
        printf("\nEnter IPv Either 4 or 6\n\n");
    }
}