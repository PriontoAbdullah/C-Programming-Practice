#include<stdio.h>
main()
{
    int i,n,key,num[100],cas=1,loc;
   while(scanf("%d",&n) !=EOF ) {
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);

    scanf("%d",&key);
    loc=0;
    for(i=0;i<n;i++) {
     if(num[i]==key)
      {
       loc=i+1;
      }
    } printf("case:%d = ",cas);
    cas++;
    if(loc==0)
        printf("Nai");
    else
        printf("%d",loc); }
  return 0;
}

