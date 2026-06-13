#include<stdio.h>
#include<math.h>
int main()
{
    long long bin;
    int dec=0,i=0,rem;
    printf("enter the number: ");
    scanf("%lld",&bin);
    while(bin)
    {
        rem=bin%10;
        dec+=rem*pow(2,i);
        bin/=10;
        i++;
    }
    printf("%d",dec);
    return 0;
}