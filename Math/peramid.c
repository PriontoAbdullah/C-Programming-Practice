#include<stdio.h>
int main()
{
    printf("This program will print a Peramid.\n");
    int a,b,c,d,n;
    printf("How big your peramid will be?\nEnter the number:");
    scanf("%d",&n);
    for(a=n; (a+1)>=0; a--)
    {
        for (b=0; b>=a; b++)
        {
            printf("");
        }
        for(c=a; c<n; c++)
        {
            printf("*");
        }
        for(d=a; d<(n-1); d++)
        {
            printf("*");
        }
        printf("\n");
    }
getch();


}
