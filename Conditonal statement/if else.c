#include<stdio.h>
main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age >= 18)
        { printf("your are Adult person.");
         printf("Are you marid person? \nEnter your ans (Y/N):");
        }
    else
        printf("you are now child.");
    getch();
}
