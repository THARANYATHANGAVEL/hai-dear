#include<stdio.h>
void main()
{
    int n,x,sum=0,i,a[50];
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    if(sum==x)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
