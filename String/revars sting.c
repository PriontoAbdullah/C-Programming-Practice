#include<stdio.h>
main()
{
    char ch[10][100];
    int n,i;
    printf("How many input you entered: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",ch[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        printf("\t%s\n",ch[i]);
    }
return 0;
}
