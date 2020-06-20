#include<stdio.h>
main()
{
    int *p,x,y,*q;
    p=&x;
    x=5;
    y=*(&x);
    printf("%d\n",y);
    q=&(*(&x));
    printf("%d",*q);
    return 0;
}
