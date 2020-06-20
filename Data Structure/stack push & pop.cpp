#include <stdio.h>
int cnt=0;
int stak[11],value;
int i,j;
int push(int value);
int pop(int value);
int main()
{
    char ch;
    while(1)
    {
        printf("Push or Pop. For push press p, for pop press d\n");
        scanf("%c",&ch);
        if( ch == 'p' )
        {
            printf("Insert a element to push in stack\n");
            scanf("%d",&value);
            getchar();
            push(value);

        }
        else if( ch == 'd')
        {
            printf("Insert a element to pop from stack\n");
            scanf("%d",&value);
            getchar();
            pop(value);
        }
    }
}

int push(int value)
{
    if( cnt > 9 ) printf("Overflow\n");
    else
    {
        stak[cnt]=value;
        cnt++;
        printf("After push a element stack is ");
        for( i=0; i<cnt; i++ ) printf("%d ",stak[i]);
        printf(" \n");
    }
}

int pop(int value)
{
    while(stak[cnt]!=value)
    {
        cnt--;
    }
    if( cnt < 0 ) printf("Underflow\n");
    else
    {
        printf("After pop a element stack is ");
        for( j=0; j<cnt; j++ ) printf("%d ",stak[j]);
        printf("\n");
    }
}
