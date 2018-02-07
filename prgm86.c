#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,j,l,c=0;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<=l;i++)
    {
        for(j=i+1;j<=l;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("string is isogram");
    }
    else
    {
        printf("string is not isogram");
    }
}
