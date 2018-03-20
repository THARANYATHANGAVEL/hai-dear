#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    int i,c=0,m,n;
    scanf("%s%s",a,b);
    m=strlen(a);
    n=strlen(b);
    if(m==n)
    {
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
    if((a[i]==b[i])||(a[i]-32==b[i])||(a[i]+32==b[i]))
    {
        c++;
    }
    }
    }
    if(c==m)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
