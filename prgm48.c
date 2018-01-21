#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[50],sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d",sum/n);
}
