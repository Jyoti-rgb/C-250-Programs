// ● Find A Grade Of Given Marks or (Find a Grade of Given Marks Using Switch Case)

#include <stdio.h>
int main()
{
    int hindi, eng, math, science, art, marks, number;
    printf("Enter the Numbers of Hindi, English,Math,Science,Art: ");
    scanf("%d%d%d%d%d", &hindi, &eng, &math, &science, &art);
    marks = hindi + eng + math + science + art;
    printf("Total Marks is: %d\n", marks);
    if (marks <= 500 && marks >= 100)
    {

        switch (marks / 100)
        {
        case 5:
            printf("Grade: A++");
            break;

        case 4: // 400 to 500
            printf("Grade: A");
            break;
        case 3: // 300 to 400
            printf("Grade: B");
            break;
        case 2: // 200 to 400
            printf("Grade: C");
            break;
        case 1: // 100 to 200
            printf("Grade: D");
            break;

        default:
            printf("Fail");
            break;
        }
    }
    else
    {
        printf("Marks Should be between 100 to 500.");
    }

    return 0;
}