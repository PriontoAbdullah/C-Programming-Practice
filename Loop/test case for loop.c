#include<stdio.h>
int main()
{
   long int b,i,j,T,sum,a;
    printf("Input Your CASE Number:");
    scanf("%d",&T);
    for (i=0;i<=T;i++)
    {printf("Input HOW many number you ADD:");
        scanf("%d",&b);
        sum=0;
        for(j=0;j<=b;j++)
        {  printf("Input your number one by one:");
           scanf("%d",a);
            sum+=a;
        }
      printf("CASE:#%d  %d",T,sum);
    } getch();
    return 0;
}
