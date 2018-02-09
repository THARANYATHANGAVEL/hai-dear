#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int l,i,b;
    scanf("%s",a);
    l=strlen(a);
    b='*';
    a[l/2]=b;
    if((l)%2==0)
    {
        a[(l-1)/2]=b;
    }
      printf("%s",a);  
   
    
}
