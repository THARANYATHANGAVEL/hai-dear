#include<stdio.h>
void main()
{
    char a[50];
    int i,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    printf("length:%d",c);
}
