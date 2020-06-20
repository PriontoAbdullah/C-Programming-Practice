#include<stdio.h>
main()
{
    int a=1,*p=&a;
    printf("%d %d %d\n",a,*p,p);

    (*p)++;
      printf("%d %d %d",a,*p,p);
}
