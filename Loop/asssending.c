#include<stdio.h>
main()
{
    int i,a,b,c;
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    /** for(i=a;i<=b;i++)
        printf("%d ",i); */

   /**   while(a<=b)
      {
          printf("%d ",a);
          a++;
      }  */

      do { printf("%d ",a);
        a++;
      }
      while (a<=b);





}
