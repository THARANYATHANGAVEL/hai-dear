#include<stdio.h>
void main()
{
    int a[20],b[20],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b[i]>a[i])
        {
            printf("%d\n",b[i]-a[i]);
        }
    }
}
