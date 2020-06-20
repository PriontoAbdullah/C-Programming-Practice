#include<stdio.h>
main()
{
    int arr[100],*p;
    scanf("%d",&arr[0]);
    /// arr == &arr[0]
    p=arr;
    printf("%d",*p);
    return 0;
}

