// ● Calculator

#include <stdio.h>
int main()
{
    int n1, n2, result, operator;
    printf("Enter Two Number: \n");
    scanf("%d%d", &n1, &n2);
    printf("____________________________\n");
    printf("%%\t CE\t C\t Back\t\n");
    printf("1/x\t x^2\t 2x\t /\t\n");
    printf("7\t 8\t 9\t *\t\n");
    printf("4\t 5\t 6\t -\t\n");
    printf("1\t 2\t 3\t +\t\n");
    printf("+/-\t 0\t .\t =\t\n\n");
    printf("Enter Operator as(1.'+',2.'-',3.'*',4.'/',5.'%%'): ");
    scanf("%d", &operator);

    switch (operator)
    {
    case 1:
        result = n1 + n2;
        printf("Add two Number: %d", result);
        break;
    case 2:
        result = n1 - n2;
        printf("Subtract two Number: %d", result);
        break;
    case 3:
        result = n1 * n2;
        printf("Multiple two Number: %d", result);
        break;
    case 4:
        result = n1 / n2;
        printf("Divide two Number: %d", result);
        break;
    case 5:
        result = n1 % n2;
        printf("Remainder two Number: %d", result);
        break;
    default:
        printf("Invalid Operator");
        break;
    }

    return 0;
}