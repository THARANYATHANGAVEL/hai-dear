#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,l;
    scanf("%[^\n]s",a);
    l=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            a[i]-=32;
        }
        else 
        {
            a[i]+=32;
        }
        printf("%c",a[i]);
    }
}
