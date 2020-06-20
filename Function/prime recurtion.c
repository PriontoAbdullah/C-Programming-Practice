#include<stdio.h>
int i,p;

int main()
{
    int n;
    printf(" Input any positive number : ");
    scanf("%d",&n);
    i = n/2;
    p = Prime(n);

    if(p==1)
        printf(" The number %d is a prime number. \n",n);
    else
        printf(" The number %d is not a prime number. \n",n);
    return 0;
}

int Prime(int n)
{
    if(i==1)
    {
        return 1;
    }
    else if(n %i==0)
    {
        return 0;
    }
    else
    {
        i = i -1;
        Prime(n);
    }
}
