#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
     
        if(a%2!=0)
        {
            printf("%d",a);
        }
         a=a/2;
    }
}
