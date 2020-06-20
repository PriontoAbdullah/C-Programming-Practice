#include<stdio.h>
int main()
{
    int t,i;
    double a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf%lf",&a,&b);
        printf("%lf\n",3.14159*a*a*b);
    }
    return 0;
}
