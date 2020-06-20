#include<stdio.h>
main()
{
    int a,*pi=&a;
    char b,*pc=&b;
    float c,*pf=&c;
    double d,*pd=&d;
    printf("%d %d %d %d\n",pc,pi,pf,pd);

    *pc++; *pi++; *pf++; *pd++;
    printf("%d %d %d %d",pc,pi,pf,pd);
    return 0;
}
