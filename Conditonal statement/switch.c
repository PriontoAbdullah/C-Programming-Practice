#include<stdio.h>
main()
{
    int markes;
    printf("Enter your marks: ");
    scanf("%d",&markes);
    switch (markes/10)
    {
    case 10:
    case 9:
    case 8:
        printf("Your GPA is: A+");
        break;

    case 7:
        printf("Your GPA is: A+");
        break;

    case 6:
        printf("Your GPA is: A");
        break;

    case 5:
        printf("Your GPA is: A-");
        break;

    case 4:
        printf("Your GPA is: B");
        break;

    case 3:
        printf("Your GPA is: C");
        break;

   default:
        printf("Your are Fail... :(");
        break;
    }
    getch();
    }
