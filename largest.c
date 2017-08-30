#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the 3 values");
scanf("%d/t%d/t%d/t",&a,&b,&c);
if(a>=b&&a>=c)
{
printf("a is largest");
}
else if(b>=a&&b>=c)
{
printf("b is largest");
}
else
{
printf("c is largest");
}
getch();
}

