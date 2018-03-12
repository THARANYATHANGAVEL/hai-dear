#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,n;
    scanf("%[^\n]s",a);
     n=strlen(a);
     
    for(i=0;i<=n;i++)
    {
         a[0]-=32;
        if(a[i]==' ')
        {
            
                a[i+1]-=32;
        }
        printf("%c",a[i]);
    }
}
