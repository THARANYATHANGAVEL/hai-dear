#include<stdio.h>
void main()
{
  char a[40];
  int i,cnt=0;
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
      cnt++;
    }
  }
  if(cnt!=0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
    }
}
