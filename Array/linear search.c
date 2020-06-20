#include<stdio.h>
main()
{
    int arr[100],i,n,key;
  scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);}
            scanf("%d",&key);
            for(i=0;i<n;i++){
            if (arr[i]==key)
            break;
            }
        if(i==n)
            printf("No\n");
        else
            printf("position is %d\n",i+1);
    return 0;
}
