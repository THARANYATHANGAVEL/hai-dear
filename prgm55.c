#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
scanf("%d\t%d",&a,&b);
i=a*b;
if(i%2==0)
{
printf("even");
}
else
{
printf("not even");
}
getch();
}
