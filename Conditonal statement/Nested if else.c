
#include<stdio.h>
main()
{
  long int a,b,c;
    printf("Enter your three number:");
    scanf("%ld%ld%ld",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
   else
   {
       if (b>c)
        printf("%d",b);
       else
        printf("%d",c);
   }
  getch();
}



