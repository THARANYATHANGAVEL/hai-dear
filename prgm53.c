#include<stdio.h>
#include<conio.h>
void main()
{
int n,cnt=0;
printf("enter the value");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
cnt++;
}
printf("count=%d",cnt);
getch();
}
