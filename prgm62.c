#include<stdio.h>
#include<string.h>
void main()
{
char str[50];
int n,c;
gets(str);
n=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='0'||str[i]=='1')
{
c++;
}
}
if(n==c)
{
printf("yes");
}
else
{
printf("no");
}
}


