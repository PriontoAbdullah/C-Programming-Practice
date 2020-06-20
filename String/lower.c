#include<stdio.h>
int main()
{
    char str[100];
    int i, ln;
    scanf("%s",str);
    for(ln=0;str[ln]!='\0';ln++);
    for(i=0;i<ln;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]='a'+(str[i]-'A');
        }
    }
  printf("%s\n",str);
  return 0;
}
