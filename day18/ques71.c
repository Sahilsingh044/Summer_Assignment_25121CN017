#include <stdio.h>
int main()
{
    int n,key,l=0,mid,h,i;
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&key);

    h=n-1;

    while(l<=h)
    {
        mid=(l+h)/2;

        if(arr[mid]==key)
        {
            printf("Found");
            return 0;
        }
        else if(arr[mid]<key)
            l=mid+1;
        else
            h=mid-1;
    }

    printf("Not Found");
}