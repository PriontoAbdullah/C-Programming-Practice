#include<stdio.h>
int main()
{
     int a,b;

     scanf("%3d%5d",&a,&b);
     printf("%d %% %d",a,b);
     scanf("%2d%3d",&a,&b);
     printf("\n%d %% %-2d",a,b);
     getch();

}

