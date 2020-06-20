#include<stdio.h>
int main()
{    int T,sum,lsd,msd,n,a;
    int arr[5];
    scanf("%d",&T);
    while(T--){
            scanf("%d",&n);
            lsd=n%10;
            while(n==0){
            n=n%10;
            n=n/10;}
        sum=lsd+n;
        printf("Sum = %d\n",n);
      }
    return 0;
}
