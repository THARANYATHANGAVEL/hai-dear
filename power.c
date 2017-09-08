#include<stdio.h>
#include<conio.h>
void  main()
{
int b,e,result=1;
printf("enter the base");
scanf("%d",&b);
printf("enter the exponent");
scanf("%d",&e);
while(e!=0)
{
result=result*b;
--e;
}
printf("answer=%d",result);
getch();
}
