#include <stdio.h>
int cnt = 0;
int i;
int stak[10],value;
int push(int value)
{
if(cnt < 10){
stak[cnt]=value;
cnt++;
printf("After push a element stack is:");
for(i = 0;i <cnt;i++){
printf("%d ",stak[i]);
}
printf("\n");
}
else
printf("Overflow\n");

}
int pop(int value)
{
stak[cnt] = value;
cnt = cnt - 1;
if(cnt == -1)
{
printf("Stack is empty\n");
}
else
{
printf("After poping an element:");
for(i = 0;i < cnt;i++)
{
printf("%d ",stak[i]);
}
}
printf("\n");
}
int main()
{
char ch;
while(1)
{
char ch;
printf("For push press p, for pop press d:");
scanf("%c",&ch);
if(ch == 'p')
{
printf("Insert an element to push:");
scanf("%d",&value);
getchar();
push(value);
}
else if(ch == 'd')
{
printf("Pop an element:");
scanf("%d",&value);
getchar();
pop(value);
}
}
}
