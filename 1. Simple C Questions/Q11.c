//● Read Integer (N) and 
// Print the First Three Powers (N^1, N^2, N^3)

// Two Method to do this

// #1 Method
#include<stdio.h>
#include<math.h>
int main()
{

int num ,a,b,c;
    printf("Enter the Number: ");
    scanf("%d", &num);
    a = pow(num, 1);
    b = pow(num, 2);
    c = pow(num, 3);
    printf("%d ,%d ,%d \n\n",a, b, c);

    return 0;
}

// #2 Method

// #include<stdio.h>
// #include<math.h>
// int main()
// {
    
    // int num;
    // printf("Enter the Number: ");
    // scanf("%d", &num);
   
    // printf("%d ,%d ,%d\n\n",num, num *num, num *num *num);
//     return 0;
// }
