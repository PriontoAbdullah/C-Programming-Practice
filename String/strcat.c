#include<stdio.h>
#include<string.h>
main()
{
     char s[10],s1[10];
     scanf("%s%s",s,s1);

    strcat(s," ");
     strcat(s,s1);
    printf("%s",s);
}

