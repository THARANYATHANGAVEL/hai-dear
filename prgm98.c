#include<stdio.h>
void main()
{
    int a[50],n,i;
    printf("enter the array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
 {
    if(a[i]>a[i+1])
    {
        printf("%d",--a[i+1]);
        break;
    }
 }
}
