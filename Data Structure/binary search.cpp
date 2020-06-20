#include<stdio.h>
#include<algorithm>
using namespace std;
int arr[10];
int n;
int sortArray()
{
    sort(arr,arr+n);
}
int binarySearch();
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sortArray();
    for(int i=0; i<n; i++) printf("%d ",arr[i]);
}
