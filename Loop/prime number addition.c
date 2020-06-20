#include<stdio.h>
int main()
{
    int T,a,b,c,n,i,j,check,sum;
    scanf("%d",&T);
    while(T--)
    {  scanf("%d%d",&a,&b);
    if(a>b)
    {   c=a;
        a=b;
        b=c;
    }   sum=0;
        for(j=a;j<=b;j++)
    {
     check=1;
      if(j==1)
        check=0;

      for(i=2;i<j;i++)
      {
          if(j%i==0)
            check=0;
      } if(check==1)
      {
        sum+=j;
      }
    }
    printf("%d\n",sum);
}
return 0;
}
