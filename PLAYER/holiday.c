#include<stdio.h>
void main()
{
    char a[5];
    scanf("%s",a);
    if(strcmp(a,"Sunday")||strcmp(a,"sunday")||strcmp(a,"SUNDAY")||strcmp(a,"Saturday")||strcmp(a,"saturday")||strcmp(a,"SATURDAY"))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
