#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,sum=0;
printf("enter n value");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
sum=sum+i;
}
printf("sum=%d",sum);
getch();
}
