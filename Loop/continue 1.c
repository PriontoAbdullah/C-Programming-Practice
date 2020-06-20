#include<stdio.h>
main()
{
 int i;
 i=0;
 while(i<=50)
     {i++;
     if((i%2))
        continue;
     printf("%d\n",i);
     }

}
