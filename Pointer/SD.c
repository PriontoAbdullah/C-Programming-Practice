#include<stdio.h>
int arr[4][4],s,d;
int main()
{
    int i,j;
    for(i=1; i<=6; i++)
    {
        scanf("%d%d",&s,&d);
        arr[s][d]=1;
        arr[d][s]=1;
    }
    printf("The Matrix is: \n");
    for(i=1; i<4; i++)
    {
        for(j=1; j<4; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}
