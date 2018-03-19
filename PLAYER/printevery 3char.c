#include<stdio.h>
#include<string.h>
void main()
{
  char a[50];
  int i,l,c=0,d=0;
  scanf("%[^\n]s",a);
  l=strlen(a);
  for(i=0;i<l;i++)
  {
    printf("%c",a[i]);
    i=i+2;
  }
}
