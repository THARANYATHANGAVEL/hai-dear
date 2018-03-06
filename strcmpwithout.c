#include<stdio.h>
#include<string.h>
void main()
{
char a[50],b[50];
int i,m,n,c=0;
scanf("%s",a);
scanf("%s",b);
m=strlen(a);
n=strlen(b);
if(m==n)
{
for(i=0;i<m;i++)
{
if(a[i]==b[i])
{
c++;
}
}
if(c==m)
{
printf("it is equal\n");
}
else
{
printf("it is not equal\n");
}
printf("%s",a);
}
else
{
if(m>n)
{
printf("%s",a);
}
else
{
printf("%s",b);
}
}
}
