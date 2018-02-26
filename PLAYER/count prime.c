#include<stdio.h>
void main()
{
    int f,i,l,j,c,k=0;
    scanf("%d%d",&f,&l);
    for(i=f;i<=l;i++)
    { 
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            k++;
        }
    }
    printf("%d",k);
}
