#include<stdio.h>
main()
{
   long int i,n,sum;

    while(printf("Input your factorial number:")&&(scanf("%d",&n)) !=EOF)
    {
        sum=1;
        for(i=1;i<=n;i++)
        {
            sum*=i;
        }
    printf("%d\n",sum);
    }
return 0;
}
