#include<stdio.h>
main()
{
    int i,sum,a,b;
    scanf("%d%d",&a,&b);
    sum=0;
     /** while(a<=b)
    {  sum+=a;
      printf("+%d",a);
      a++;

    } */
    for (i=a;i<=b;i++)
    {
    printf("+%d",i);
    sum+=i; }
    printf("\n %d",sum);
    getch();

}


