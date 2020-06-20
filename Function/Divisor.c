#include<stdio.h>
void div(int x);
int main()
{    int x;
scanf("%d",&x);
    div(x);
    return 0;
}
void div(int x){
int i;
for(i=1;i<=x;i++){
    if(x%i==0){
        printf("%d\n",i);
    }
}
}
