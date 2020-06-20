#include<stdio.h>
main()
{
    int sum=0,count=0;
    int i,num;
    scanf("%d",&num);
    while(num!=999)
    {
        sum=sum+num;
        count++;
        printf("stop at 999\n");
        scanf("%d",&num);
    }
    printf("The num %d sum is %d",count,sum);
}
