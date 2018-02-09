#include<stdio.h>
void main()
{
    int a[50],n,k,i;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i==k)
        {
            printf("%d",a[i]);
        }
    }
}
