#include<stdio.h>
main()
{
    int n,i,a,sum;
    printf("How integer you input:");
    scanf("%d",&n);
    sum=1;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum*=a;
     }
    printf("=%d",sum);
    getch();
    }

