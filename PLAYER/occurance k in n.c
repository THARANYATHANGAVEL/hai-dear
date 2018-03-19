#include<stdio.h>
void main()
{
  int n,k,rem,t,flag=0;;
  scanf("%d%d",&n,&k);
  t=n;
  while(n!=0)
  {
    rem=n%10;
    if(rem==k)
    {
      flag=1;
    }
    n=n/10;
  }
  if(flag==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
