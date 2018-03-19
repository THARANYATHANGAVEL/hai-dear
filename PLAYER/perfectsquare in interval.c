#include<stdio.h>
void main()
{
  int l,r,i,j,c=0;
  scanf("%d%d",&l,&r);
  for(i=l;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    if(j*j==i)
    {
      c++;
    }
  }
  printf("%d",c);
}
