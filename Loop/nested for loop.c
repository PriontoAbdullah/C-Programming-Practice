#include<stdio.h>
main()
{
    int a,b;
    for (a=1;a<=4;a++)
    {   printf("\n a is now: %d\n",a);
        for(b=1;b<=5;b++)
            printf("b = %d\n",b);
    }
    getch();
}
