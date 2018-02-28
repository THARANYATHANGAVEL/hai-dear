#include<stdio.h>
void main()
{
    char a[50];
    int i,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            c++;
        }
    }
    printf("numeric character in string:%d",c);
}
