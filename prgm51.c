#include<stdio.h>
#include<conio.h>
void main()
{
int n,cnt=0,rem,rev=0,a;
printf("enter the value:\n");
scanf("%d",&n);
while(n!=0)
{
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
}
while(rev!=0)
{
   a=rev%10;
   printf("%d ",a);
   rev=rev/10;
}
getch();
}

