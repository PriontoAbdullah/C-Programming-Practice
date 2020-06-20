#include<stdio.h>
int i,j,k,array[100],key,n,start,end,mid;
void bubble_short();
int binary_search();
int main()
{
    printf("How long  array element is: ");
    scanf("%d",&n);
    printf("write down the all the array element: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter search element: ");
    scanf("%d",&key);
    bubble_short();
   binary_search();
    if(start>end)
        printf("%d not found in the array.\n",key);
    else
        printf("%d is the %d th element of the the array.\n",array[mid],mid+1);
    return 0;
}

void bubble_short()
{
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[i]>array[j])
            {
                array[j]=array[i]^array[j];
                array[i]=array[i]^array[j];
                array[j]=array[i]^array[j];
            }
        }
    }
    printf("After shorting  array element is: ");
    for(k=0; k<n; k++)
        printf("%d ",array[k]);
    printf("\n");
}

int binary_search(){
 start=0;
    end=n-1;

    while(start<=end)
    {
        mid=(int)((start+end)/2);
        if(key==array[mid])
            break;
        else if(key<array[mid])
            end=mid-1;
        else
            start=mid+1;
    }
}
