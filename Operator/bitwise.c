//#include<stdio.h>
main()
{
    int a,b;
    a = 5; b =6;
    printf("%d   %d  %d   %d   %d   %d  %d", a&b, a|b, a^b, a<<b, a>>b, a<<1, a>>1);
    getch();
}
