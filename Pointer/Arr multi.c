#include<stdio.h>
main()
{
    int i,j,k,m,n,p,sum;
    m = p = n = 3;

    int a[3][3],b[3][3],c[3][3];
    printf("Input A matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nInput B matrix:\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nThe A matrix is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe B matrix is:\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            sum = 0;
            for(k=0; k<p; k++)
            {
                sum=sum + a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }
    printf("\nThe C matrix is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
