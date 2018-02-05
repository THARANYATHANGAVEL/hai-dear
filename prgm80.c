#include<stdio.h>
void main()
{
    int n,t,rem=0,rev=0;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
       rem=t%10;
       rev=rev*10+rem;
       t/=10;
    }
    rem=0;
    while(rev!=0)
    {
     rem=rev%10;
     if(rem%2!=0)
     {
         printf("%d ",rem);
     }
     rev/=10;
    }
}
