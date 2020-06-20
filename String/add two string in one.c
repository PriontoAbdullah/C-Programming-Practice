#include<stdio.h>
 main()
 {
     char s[10],s1[10];
     int i,ln;
     scanf("%s%s",s,s1);

     for(ln=0;s[ln]!='\0';ln++);
     s[ln]=' ';
    // ln++;

     for(i=0;s1[i]!='\0';i++)
     s[ln+i]=s1[i];
     s[ln+i]=s1[i];

     printf("%s",s);
 }
