#include<stdio.h>
void main()
{
    int a[10],n,k,r=0,temp,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(r=0;r<k;r++)
    {
        temp=a[n-1];
        for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
    
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
}
