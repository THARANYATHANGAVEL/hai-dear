#include<stdio.h>
void main()
{
    int n,rem,result=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        result=result+rem*rem;
        n/=10;
    }
    printf("%d",result);
    }
