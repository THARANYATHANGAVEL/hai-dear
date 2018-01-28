#include<stdio.h>
void main()
{
char a[100];
int c=0,c1=0,i;
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
{
c++
}
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')
{
c1++;
}
}
if(c>0&&c1>0)
{
printf("yes");
}
else
{
printf("no");
}
}
