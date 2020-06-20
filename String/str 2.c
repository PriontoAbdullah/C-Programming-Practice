#include<stdio.h>
int main()
{
    char str[100];
    int ln;
    scanf("%s",&str);
    for(ln=0;str[ln]!='\0';ln++);
        printf("%d\n",ln);
    return 0;
}
