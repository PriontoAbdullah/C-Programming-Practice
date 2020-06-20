#include<stdio.h>
int main()
{
    int x,y;
    x = 5;
    y = 6;
    x=x^y;
    y=x^y;
    x=x^y;
    printf("x=%d    y=%d\n",x,y);
    return 0;
}
