#include<stdio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
while(n%10!=0)
{
n++;
}
printf("nearest 10 th multiple is %d",n);
}
