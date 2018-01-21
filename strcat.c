#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int len1,len2,i,j,k;
char s1[100],s2[200];
gets(s1);
gets(s2);
len1=strlen(s1);
len2=strlen(s2);
j=len1+len2;
for(i=len1+1;i<=j;i++)
{
for(k=0;k<=len2;k++)
{
s1[i]=s2[k];
}
puts(s1);
getch();
}
