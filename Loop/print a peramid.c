#include<stdio.h>
main()
{
    int a,b,n;
    printf("How line the peramid you see__? :");
    scanf("%d",&n);
    for(b=0;b<=n;b++)
    {b=b+1;
    for(a=1;a<=b;a++)
    {
        printf("*");
    }
     printf("\n"); }
   getch();
}
