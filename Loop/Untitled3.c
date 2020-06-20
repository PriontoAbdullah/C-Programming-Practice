#include<stdio.h>
main()
{
   long int i,n,sum;

    while(printf("Input your factorial number:")&&(scanf("%d",&n)) !=EOF)
    {

        sum=1;
        i=1;
        while(i<=n)
        {
            sum*=i;
             i++;
        }
    printf("%d\n",sum);
    }
return 0;
}
