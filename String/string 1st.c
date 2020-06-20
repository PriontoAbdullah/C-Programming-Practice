#include<stdio.h>
main()
{
    char stng[4]={"DIU"};
    printf("%s \n",stng);
    int i=0;
    char ch[10];
    ch[0]='D';
     ch[1]='I';
      ch[2]='U';
       ch[3]='D';
        ch[4]='H';
         ch[5]='A';
          ch[6]='K';
           ch[7]='A';
            ch[8]='O';

           while(ch[i]!='A')
           {
               printf(" %c",ch[i]);
               i++;
           }

}
