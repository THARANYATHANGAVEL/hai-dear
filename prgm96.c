#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf ("Enter a number \n");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if (c==2)
    {
    printf ("The number is PRIME");
} 
   else
   {
    printf ("The number is COMPOSITE");
}
}
