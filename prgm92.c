#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,s=0,a[50];
printf("enter n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d ",&a[i]);
}
for(i=0;i<n;i++)
{
s=s+a[i];
}
printf("sum=%d",s);
getch();
}
