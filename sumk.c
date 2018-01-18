#include<stdio.h>
#include<conio.h>
void main()
{
    int a[25],n,i,k,sum=0;
    printf("array size:\t ");
    scanf("%d",&n);
    printf("how many element want sum");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    getch();
}
