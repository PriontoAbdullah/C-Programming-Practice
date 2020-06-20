#include<stdio.h>
int main()
{
    int p,q,temp;
    p = 5;
    q = 6;
    temp=p;
    p=q;
    q=temp;
    printf("p=%d    q=%d\n",p,q);
    return 0;
}
