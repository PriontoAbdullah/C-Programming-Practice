#include<stdio.h>
int sum(int n);
int  main()
{
    int res,num;
    printf("Enter a positive number:\n");
    scanf("%d",&num);
    res=sum(num);
    printf("sum=%d\n",res);
    return 0;
}

int sum(int n){
     if(n!=0)
        return n+sum(n-1);
     else
        return n;
}
