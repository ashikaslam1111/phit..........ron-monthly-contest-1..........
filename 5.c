#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void pro(int ar[],int len);
void sorting_arry( int array[],int len);
int main()
{
    int t;
    scanf("%d",&t);
    for (int h=1; h<=t; h++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        pro(a,n);
        sorting_arry(a,n);
        printf("\n");
    }
    return 0;
}
void pro(int arr[],int len)
{

    int ar[len];
    for(int i=0; i<len; i++)
    {
        ar[i]=arr[i];
        if(ar[i]<0)
        {
            ar[i]=ar[i]*(-1);
        }
    }

    int maxx=ar[0];
    int minn=ar[0];
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
    printf("%d %d ",maxx*maxx,minn*minn);
}

void sorting_arry( int array[],int len)
{

    int i,j,temp;
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("%d %d",array[len-1]+array[len-1],array[0]+array[0]);

}
