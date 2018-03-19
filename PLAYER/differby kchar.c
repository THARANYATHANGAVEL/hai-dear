#include<stdio.h>
void main()
{
  char a[50],b[50];
  int k,i,c=0;
  scanf("%s%s",a,b);
  scanf("%d",&k);
  for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
  {
    if(a[i]!=b[i])
    {
      c++;
    }
  }
if(c==k)
{
  printf("yes");
}
else
{
  printf("no");
}
}
