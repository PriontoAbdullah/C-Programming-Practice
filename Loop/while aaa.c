#include<stdio.h>
main()
{ int a,b,x;
a=10,b=15,x=5;
printf("--a,   --b,    --x\n------------------\n");
while(--a,--b,--x)
    printf("%d      %d       %d\n",a,b,x);

}
