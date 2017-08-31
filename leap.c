#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the year");
scanf("%d",&a);
if(a%4==0)
{
printf("leap year");
}
else
{
printf("not leap year");
}
getch();
}
