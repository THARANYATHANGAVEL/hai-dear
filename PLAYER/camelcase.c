#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,n;
    scanf("%s",a);
     n=strlen(a);
    if(a[0]>96&&a[0]<123)
    {
        a[0]-=32;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]=='\0')
        {
            if(a[i+1]>96&&a[i+1]<123)
            {
                a[i+1]-=32;
            }
        }
        else
        {
            if(a[i]>64&&a[i]<91)
            {
                a[i]+=32;
            }
        }
    }
    printf("%s",a);
}
