#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum1=0,sum2=0;
for(i=1;i<=15;i++)
{
sum1=sum1+i;
}
for(i=15;i<=45;i++)
{
if(i%2!=0)
sum2=sum2+i;
}
printf("%d\t%d",sum1,sum2);
getch();
}
