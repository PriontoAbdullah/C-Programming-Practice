         #include<stdio.h>
main()
{
    int start,end,mid,i,key,total,array[100],found;
    printf("how many element:");
    scanf("%d",&total);
     printf("Enter element assending order:");
     for(i=0;i<total;i++)
     {
         printf("   \nElement #%d:",i+1);
         scanf("%d",&array[i]);
     }
      printf("\nElement to be searched: ");
      scanf("%d",&key);
      start=0;
      end=total-1;
      found=0;
      while(start<=end)
      { printf("strat %d\tEnd %d\tmid %d\tkey %d\tarray[mid] %d\n",start,end,mid,key,array[mid+1]);
          mid=(start+end)/2;
          if(key < array[mid])
          {
           end=mid-1;
          }
          else
          {
              if(key > array[mid])
              {
                  start=mid+1;
              }
              else
                {
                   if (key==array[mid])

                    printf("\n %d is found at %d.",key,mid+1);
                   found=1;
                   break;
                }
          }
      }
             if (found==0)
             {
                 printf("\n %d is not in the list.",key);
             }

return 0;
}
