#include<stdio.h>
main()
{
    int a,b,c;
     a=5;
       ++a;
    printf("%d",a);
        a++;
    printf("\n%d\n",a);
      b=++a; // Prefix  a=a+1; b=a
         printf("\n%d\t%d",b,a);
     b=a++;  //postfix  b=a; a=a+1
     printf("\n%d\t%d",b,a);
getch();
}
