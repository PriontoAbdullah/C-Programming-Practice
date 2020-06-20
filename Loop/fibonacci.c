/// 0 1 1 2 3 5 8 13 21 ...
#include<stdio.h>
main()
{
    int a,b,c,i,n,T;
    printf("Input your loop number:");
    scanf("%d",&T);
   while(T--) {
    scanf("%d",&n);
    a = 0;
    b = 1;
    for (i=1;i<=n;i++)
    {    if(i==n)
         printf("The %d number is:%d\n",n,a);
        c=a+b;
        a=b;
        b=c;
    } }

return 0;
}
