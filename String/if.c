#include<stdio.h>
main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n==m)
    {printf("Equal\n");}
    if(n<m)
    {
        printf("m boro\n");
    }
    if(n<=m)
    {
        printf("m soman & boro\n");
    }
    if(n>m)
    {
        printf("n boro\n");
    }
    if(n>=m)
    {
        printf(" n boro & soman\n");
    }
    if(n!=m)
    {
        printf("n m soman noy\n");
    }
}
