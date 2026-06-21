#include <stdio.h>
int main()
{
    int n,i,j,count,max=0,element;
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
            if(arr[i]==arr[j]) count++;

        if(count>max)
        {
            max=count;
            element=arr[i];
        }
    }

    printf("%d",element);
}