#include<stdio.h>
void main()
{
  int l,r,n;
  printf("Enter the number");
  scanf("%d",&n);
  printf("enter the two number for interval");
  scanf("%d %d",&l,&r);
  if(n>=l&&n<=r)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
