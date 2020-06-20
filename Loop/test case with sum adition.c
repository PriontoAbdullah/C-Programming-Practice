#include<stdio.h>
main()
{
    int a,b,sum,n,i,j,T;
    printf("Input your Test case:");
    scanf("%d",&T);
    while(T--)
            {   printf("How number you addition:");
        scanf("%d",&n);
        sum=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
  }
}
