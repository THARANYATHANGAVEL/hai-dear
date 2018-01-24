#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0,rem;
printf("enter the value");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
n=n/10;
sum=sum+rem
}
printf("%d",sum);
getch();
}
