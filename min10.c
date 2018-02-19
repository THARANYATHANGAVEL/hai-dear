#include<stdio.h>
void main()
{
    int a,b,k[15],temp;
    for(a=0;a<10;a++)
    {
        scanf("%d\t",&k[a]);
    }
    for(a=0;a<9;a++)
    {
        for(b=a+1;b<10;b++)
        {
            if(k[a]>k[b])
            {
                temp=k[a];
                k[a]=k[b];
                k[b]=temp;
            }
        }
    }
    printf("%d",k[0]);

}
