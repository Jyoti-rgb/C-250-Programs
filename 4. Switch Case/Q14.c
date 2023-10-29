// ● Create a Simple Calculator using a switch case.
#include <stdio.h>
int main()
{
    char op;
    int a, b, total;

    printf("Take Operator: ");
    scanf("%c", &op);
    printf("Enter Two Number: ");
    scanf("%d%d", &a, &b);
    printf("________________________________\n");
    printf("%%\t CE\t C\t Del\t\n");
    printf("1/x\t x2\t MC\t /\t\n");
    printf("7\t 8\t 9\t x\t\n");
    printf("4\t 5\t 6\t -\t\n");
    printf("1\t 2\t 3\t +\t\n");
    printf("+/-\t 0\t .\t =\t\n\n");

    switch (op)
    {
    case '+':
        total = a + b;
        printf("%d + %d is: %d", a, b, total);
        break;
    case '-':
        total = a - b;
        printf("%d - %d is: %d", a, b, total);
        break;
    case '*':
        total = a * b;
        printf("%d * %d is: %d", a, b, total);
        break;
    case '/':
        total = a / b;
        printf("%d / %d is: %d", a, b, total);
        break;
    case '%':
        total = a % b;
        printf("%d % %d is: %d", a, b, total);
        break;
    default:
        printf("Invalid Operator");
    }
    return 0;
}
