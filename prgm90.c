#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,l;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<=l;i++)
    {
    if(a[i]>=48&&a[i]<=57)
    {
        printf("%c ",a[i]);
    }
    }
}
