#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void pro(long long int ar[],int len);
void sum( long long int ar[],int len);
int main()
{
    int t;
    scanf("%d",&t);
    for (int h=1; h<=t; h++)
    {
        int n;
        scanf("%d",&n);
        long long int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        pro(a,n);
        sum(a,n);
        printf("\n");
    }
    return 0;
}
void pro(long long int arr[],int len)
{

    long long  int ar[len];
    for(int i=0; i<len; i++)
    {
        ar[i]=arr[i];
        if(ar[i]<0)
        {
            ar[i]=ar[i]*(-1);
        }
    }

    long long  int maxx=ar[0];
    long long  int minn=ar[0];
    for(int i=0; i<len; i++)
    {
        if(ar[i]<minn)
        {
            minn=ar[i];
        }
        if(ar[i]>maxx)
        {
            maxx=ar[i];
        }
    }
    printf("%lld %lld ",maxx*maxx,minn*minn);
}

void sum( long long int ar[],int len)
{

    long long   int maxx=ar[0];
    long long int minn=ar[0];
    for(int i=0; i<len; i++)
    {
        if(ar[i]<minn)
        {
            minn=ar[i];
        }
        if(ar[i]>maxx)
        {
            maxx=ar[i];
        }
    }
    printf("%lld %lld",maxx*2,minn*2);

}
