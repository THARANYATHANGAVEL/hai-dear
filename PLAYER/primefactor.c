#include<stdio.h>
void main()
{
        int n,i,j,c;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                if(n%i==0)
                { 
                        c=0;
                for(j=1;j<=n;j++)
                { 
                       
                        if(i%j==0)
                        {
                                c++;
                        }
                }
                if(c==2)
                {
                        printf("%d ",i);
                }
                }
        }
}
