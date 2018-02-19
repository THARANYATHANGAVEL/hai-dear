#include<stdio.h>
void main()
{
    int n,rem,m=1;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        m=m*rem;
        n=n/10;
 
    }
    printf("%d",m);
}
