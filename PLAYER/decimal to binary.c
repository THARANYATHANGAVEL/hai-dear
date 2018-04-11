#include<stdio.h>
void main()
{
    int decimal,a[50],c,rem,i=0,j=0,b[50];
    scanf("%d",&decimal);
    while(decimal>0)
    {
       rem=decimal%2;
       a[i]=rem;
       i++;
       decimal=decimal/2;
    }c=i;
    for(i=c-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<c;i++)
    {
        printf("%d",b[i]);
    }
}
