#include<stdio.h>
void main()
{
int m,h=0;
scanf("%d",&m);
 while(m>=60)
{
h++;
m=m-60;
}
printf("%d %d",h,m);
}
