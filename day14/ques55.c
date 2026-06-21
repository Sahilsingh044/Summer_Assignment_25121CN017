#include <stdio.h>
#include <limits.h>

int main()
{
    int n,i,first=INT_MIN,second=INT_MIN;
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
            second=arr[i];
    }

    printf("%d",second);
}