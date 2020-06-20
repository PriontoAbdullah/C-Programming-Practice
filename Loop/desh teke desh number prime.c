#include<stdio.h>
main()
{
    int a,b,i,j,m,n,check;
    scanf("%d%d",&m,&n);
    for(j=m;j<=n;j++)
    {  a=j;
       check=1;
       if (a==1)
        check=0;
        for(i=2;i<a;i++)
       {
            if(a%i ==0)
            check=0;
    }
    if (check==1)
    printf("%d is prime number\n",a); }

}
