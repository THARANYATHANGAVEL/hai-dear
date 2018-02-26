#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int n,i,t;
    scanf("%s",a);
    n=strlen(a);
  if(n%2==0)
        {
    for(i=0;i<n;i=i+2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
        }
        else
        {
            for(i=0;i<n;i=i+3)
            {
               t=a[i];
        a[i]=a[i+1];
        a[i+1]=t; 
            }
        }
    printf("%s",a);
}
