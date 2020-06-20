#include<stdio.h>
main()
{
    int i;
    i=1;
    loop:
        printf("%d ",i);
        i++;
        if(i<=99)
        goto loop;
        getch();

}
