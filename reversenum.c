#include<stdio.h>
#include<conio.h>
void main()
{
int n,r=0,remain;
printf("enter n value");
scanf("%d",&n);
while(n!=0)
{
remain=n%10;
r=r*10+remain;
n=n/10;
}
printf("reverse num=%d",r);
getch();
}
