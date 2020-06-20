#include<stdio.h>
main()
{
   char s[15],s1[15];
   int i=0;
      scanf("%s",s);
  /** while(1)
   {    s1[i]=s[i];
       if(s[i]=='\0')
        break;
       i++;

} **/

  for(i=0;s[i]!='\0';i++)
  { s1[i]=s[i]; }
   s1[i]=s[i];

     printf("%s",s1);
}
