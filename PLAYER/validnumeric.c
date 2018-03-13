#include<stdio.h>
#include<string.h>
void main()
{
    char a[5];
    int l,n=0,i;
    scanf("%[^\n]s",a);
    l=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            n++;
        }
    }
    if(n==l)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
