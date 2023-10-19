// ● Calculate profit or loss.

#include <stdio.h>
int main()
{
    int SP, CP, profit, loss;
    printf("Enter the Cost Price: ");
    scanf("%d", &CP);
    printf("Enter the Selling Price: ");
    scanf("%d", &SP);

    if (SP > CP)
    {
        profit = SP - CP;
        printf("Profit: %d", profit);
    }
    else if (CP - SP)
    {
        loss = CP - SP;

        printf("Loss: %d", loss);
    }
    else
    {
        printf("No Profit No Loss.");
    }

    return 0;
}