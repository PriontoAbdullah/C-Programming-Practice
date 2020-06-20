#include<stdio.h>
main()
{
    int i,j,k,m,n,p,sum;

   int a[2][2]={{1,2},
                 {3,4}
                };

    int b[2][2]={{5,6},
                  {7,8}
                 };
    int c[2][2];

    m = p = n = 2;

    printf("The A matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            printf("\t%d",a[i][j]);

    } printf("\n");
        }    printf("The B matrix is:\n");
    for(i=0;i<p;i++){
        for(j=0;j<n;j++){
            printf("\t%d",b[i][j]);

    } printf("\n");
        }
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
            sum = 0;
           for(k=0;k<p;k++){
                sum=sum + a[i][k]*b[k][j];
              c[i][j]=sum;
           }
        }
     }
    printf("The C matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\t%d",c[i][j]);

    } printf("\n");
        }

return 0;
}

