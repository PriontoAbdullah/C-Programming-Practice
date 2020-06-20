#include<stdio.h>
main()
{
    int n,i,a,sum;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    printf("=%d",sum);

    }
