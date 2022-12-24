#include<stdio.h>
int main()
{
    int i;
    int n;
    int j;
    char a;
    scanf("%d ",&n);
    scanf("%c",&a);
    for(i=1; i<=n; i++)
    {


        for(j=n-1; j>=i; j--)
        {
            printf(" ");

        }
        for(j=1; j<=n; j++)
        {
            printf("%c",a);

        }
printf("\n");
    }
    return 0;
}
