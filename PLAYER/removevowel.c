#include<stdio.h>
#include<string.h>
void main()
{
    char n[50];
    int i,l,flag=0;
    scanf("%s",n);
    l=strlen(n);
    for(i=l-1;i>=0;i--)
    {
        if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'||n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U')
        {
            flag=0;
        }
        else
        {
            printf("%c",n[i]);
        }
    }
}
