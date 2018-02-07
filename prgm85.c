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
        if(i%2!=0)
        {
            printf("%c ",a[i]);
        }
    }
    printf("\n");
    for(i=0;i<=l;i++)
    {
        if(i%2==0)
        {
            printf("%c ",a[i]);
        }
    }
}
