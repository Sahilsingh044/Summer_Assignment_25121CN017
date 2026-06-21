#include <stdio.h>
int main()
{
    int n,i,key,count=0;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&key);

    for(i=0;i<n;i++)
        if(arr[i]==key) count++;

    printf("%d",count);
}