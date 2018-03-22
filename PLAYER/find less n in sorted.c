#include<stdio.h>
void main()
{
    int i,j,n,a[15],temp,t;
    printf("Enter the array size:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    t=n;
    for(i=1;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<t)
        {
            printf("%d ",a[i]);
        }
    }
}
