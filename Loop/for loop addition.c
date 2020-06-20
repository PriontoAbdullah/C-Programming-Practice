#include<stdio.h>
main()
{
    int i,a,n,sum;
    scanf("%d",&n);
    sum = 0;
    i = 1;
    for ( ;i<=n;i++)
    {
        printf("+%d",i);
        sum+=i;
    }
    printf("\n%d ",sum);
    getch();
}
