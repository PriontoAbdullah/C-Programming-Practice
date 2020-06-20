#include<stdio.h>
int main()
{
    int a,b,n,i,sum;
    printf("Input HOW many number you ADD:");
     while ((scanf("%d",&n)) !=EOF )/** koto gula nub nibo jog
                                        korar jonno */
     { if (n==0)
        break;  /// n=0 nile program turmineted korbe
     sum=0;
    for (i=1;i<=n;i++)
    {printf("Input your number one by one:");
     scanf("%d",&a);
      sum=sum+a; }/// oi songkok bar input niyeprint korbe.
    printf("%d\n",sum);
     }
 return 0;
}
