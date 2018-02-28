#include<stdio.h>
void main()
{
    char a[50];
    int i,c=0,n=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9'))
        {
            c++;
        }
        else
        {
            n++;
        }
    }
    printf("special character in string:%d",n);
}
