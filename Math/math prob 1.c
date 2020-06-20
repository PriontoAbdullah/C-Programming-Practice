#include<stdio.h>
int main()
{   int a,b;
    printf("This is the program about which is bigger than other show in output screen.\n");

    printf("input your first number:\n");
    scanf("%d",&a);

    printf("then input your second number:\n");
    scanf("%d",&b);
    a>b ?  printf("the bigger number is"): (a==b ?  printf("the bigger number is")): (printf("the bigger number is equal"));





   /*if (a>b)

       printf("the bigger number is: %d",a);

   else (a<b)

    printf("the bigger number is: %d",b);

   else (a==b)

        printf("the two numbers are %d equal %d equal",a,b); */

    getch();
}
