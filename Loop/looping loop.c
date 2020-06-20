#include<stdio.h>
main()
{
    int a,b,i,j;
    for (j=1;j<=5;j++)
    {
      printf("\n\nIs now:%d",j);

   printf("\ninput two number __ to __ :");
    scanf("%d%d",&a,&b);
    /**   for (i=a;i<=b;i++)
           printf("%d ",i); **/


     /** do {
        printf("%d  ",a);
        a++; }
        while(a<=b); */

            while(a<=b)
        {
            printf("%d   ",a);
            a++;
        }


    getch();

}
}
