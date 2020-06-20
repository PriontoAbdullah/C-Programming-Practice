#include<stdio.h>
main()
{
    int num[5],sum,i;
    sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
        printf("%d ",num[i]);
    }

    printf("\n%d",sum);
    return 0;
}
