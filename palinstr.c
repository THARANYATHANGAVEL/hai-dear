#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],c[50];
    int n,i,j=0,k;
    printf("enter the string:");
    scanf("%s",a);
    n=strlen(a);
for(i=n-1;i>=0;--i)
{
    c[j]=a[i];
    j++;
}
k=strcmp(c,a);
if(k==0)
    printf("it is palindrome");
else 
    printf("not panlindrome");
}
