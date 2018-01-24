#include<stdio.h>
void main()
{
char a[100];
int n,i,sum=0,l;
scanf("%s",&a);
l=strlen(a);
for(i=0;i<=n;i++)
{
if(a[i]>=0&&a[i]<=9)
{
sum++;
}
}
  printf("%d",sum);
}
