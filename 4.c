#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    int i;
    int len=strlen(str);

    for(i=0; i<len; i++)
    {
        int xx=str[i];
        if(xx>=97 &&xx<=122)
        {
            str[i]=str[i]-32;
        }
    }
    int flag=0;
    for(i=0; i<len; i++)
    {
        if(str[i]=='C'&&str[i+1]=='H'&&str[i+2]=='A'&&str[i+3]=='M'&&str[i+4]=='P'&&str[i+5]=='I'&&str[i+6]=='O'&&str[i+7]=='N'&&str[i+8]=='S')
        {
            flag=1;
        }

    }
    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
