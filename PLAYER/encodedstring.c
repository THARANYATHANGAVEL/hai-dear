#include<stdio.h>
void main()
{
        char a[50];
        int i;
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            printf("%c",a[i]+3);
        }

}
