#include<stdio.h>
void main()
{
    int i,j,n,a[15],temp,k;
    printf("Enter the array size:");
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
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
        if(k>a[i])
        {
            printf("%d ",a[i]);
        }
    }
}
