#include<stdio.h>
int main()
{
    int x,*ptr,a[5]={10,20,30,40,50};
    ptr=a;
    x=*ptr++;
    printf("ptr=%d     x=%d\n",ptr,x);

     x=*++ptr;
    printf("ptr=%d     x=%d\n",ptr,x);

     x=++*ptr;
    printf("ptr=%d     x=%d\n",ptr,x);
    printf("ptr=%d     a[2]=%d\n",&a[2],a[2]);

return 0;
}
