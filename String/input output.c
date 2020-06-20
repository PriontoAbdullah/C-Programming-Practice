#include<stdio.h>
main()
{
    char ch[100];
    while(gets(ch))
    {
        if (ch[0]=='\0')
            return 0;
       /// printf("%s\n",ch);
       puts(ch);
    }

}
