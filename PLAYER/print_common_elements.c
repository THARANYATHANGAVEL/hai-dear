#include<stdio.h>
void main()
{
    int n,A[50],B[50],i,flag,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&B[i]);
    }
    for(i=0;i<n;i++)
    { 
        flag=0;
        for(j=0;j<n;j++)
        {
            if(A[i]==B[j])
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            printf("%d ",A[i]);
        }
    }
}
