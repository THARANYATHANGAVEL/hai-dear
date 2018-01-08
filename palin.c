#include<stdio.h>
#include<conio.h>
void main()
{
int n,r=0,remain,p;
printf("enter n value");
scanf("%d",&n);
  p=n;
while(n!=0)
{
remain=n%10;
r=r*10+remain;
n=n/10;
}
if(p==r)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
