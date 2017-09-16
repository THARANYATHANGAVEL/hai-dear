#include<stdio.h>
#include<conio.h>
void main()
{
int f,l,i;
printf("enter the value first number");
scanf("%d",&f);
printf("enter last value");
scanf("%d",&l);
for(i=f;i<=l;i++)
{
if(i%2==0)
{
printf("%d",i);
break;
}
}
getch();
}
