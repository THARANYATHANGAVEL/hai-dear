#include<stdio.h>
void  main()
{
int n,i,a;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
a++;
}
}
if(a==2)
{
printf("yes prime");
}
else
{
printf("no not prime");
}
}
