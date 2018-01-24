#include<stdio.h>
#include<conio.h>
void  main()
{
char a[100];
int i,k;
printf("enter the string:\n");
scanf("%s",&a);
printf("how character u want print\n");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%c",a[i]);
}
getch();
}
