#include<stdio.h>
#include<string.h>
main()
{
    char s[10],s1[10];
    int ck;
    gets(s);
    gets(s1);

    ck=strcmp(s,s1);

    if(ck==0)
        puts("same");
        else
        puts("not same");
}
