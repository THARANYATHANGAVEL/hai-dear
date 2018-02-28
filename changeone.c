#include<stdio.h>
#include<string.h>
void main()
{
  char a[50],b[50];
  int m,n,i,c=0;
  scanf("%s %s",a,b);
  m=strlen(a);
  n=strlen(b);
  if(m==n)
  {
      for(i=0;a[i]!='\0';i++)
      {
          if(a[i]!=b[i])
          {
              c++;
          }
      }
      if(c==1)
         {
             printf("yes");
         }
         else
         {
            printf("no"); 
         }
  }
  else
  {
      printf("no");
  }
}
