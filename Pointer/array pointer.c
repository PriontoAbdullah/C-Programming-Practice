#include<stdio.h>
main()
{
    int arr[10]={2,5,8,0,9,1,4,6};
    int *p;
    p=arr;
    printf("%d %d %d",*p,*(p+1),*(p+9));
    return 0;
}
