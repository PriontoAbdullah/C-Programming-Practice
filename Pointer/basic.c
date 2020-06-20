#include<stdio.h>
main()
{
    int a,*p;
    p=&a;
    *p=6;
    printf("a=%d p=%d p*=%d",a,p,*p);
    a=5;
    printf("\na=%d",*p);
}
