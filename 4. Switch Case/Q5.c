// ● Find the Radius, Circumference and Volume of the Cylinder

#include <stdio.h>
int main()
{
    int choice;
    double pie = 3.14, r, v, c, h;
    printf("Find Radius, Circumference and Volume of Cylinder.\n");
    printf("Choice\n");
    printf("1) Radius\n");
    printf("2) Circumference\n");
    printf("3) Volume\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Find Radius of Cylinder.\n");
        printf("Enter Volume: ");
        scanf("%lf", &v);
        printf("Enter Height: ");
        scanf("%lf", &h);
        r = v / pie * h;
        printf("Radius is: %.1lf", r);

        break;
    case 2:
        printf("Find Circumference of Cylinder.\n");
        printf("Enter Radius: ");
        scanf("%lf", &r);
        printf("Enter Height: ");
        scanf("%lf", &h);
        c = 2 * (pie * r * h);
        printf("Circumferences is: %.1lf", c);
        break;
    case 3:
        printf("Find Circumference of Cylinder.\n");
        printf("Enter Radius: ");
        scanf("%lf", &r);
        printf("Enter Height: ");
        scanf("%lf", &h);
        v = pie * (r * r) * h;
        printf("Volume is: %.1lf", v);
        break;

    default:
        printf("Invalid Number");
        break;
    }
    return 0;
}