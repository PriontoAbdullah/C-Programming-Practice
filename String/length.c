#include<stdio.h>
main()
{
    char ch[10]="prionto";
    int ln,i=0;
    while(ch[i]!='\0')
    {
        i++;
    }
    ln=i;
    printf("%d",ln);

    for(ln=0; ch[ln]!='\0';ln++);
     printf("\n%d",ln);

}
