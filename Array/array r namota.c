#include<stdio.h>
main()
{
  int n,i,j;
  int sum[10][10];
  for(i=1;i<=10;i++){
     for(j=1;j<=10;j++){
           sum[i][j]=i*j;
     }
  }
 printf("%d",sum[5][10]);
  scanf("%d",&n);
  for(i=1;i<=10;i++){

     printf("%d x %d=%d\n",n,i,sum[n][i]);
  }
 getch();
}
