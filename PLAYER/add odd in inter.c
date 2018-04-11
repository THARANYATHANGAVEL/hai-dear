#include<stdio.h>
void main()
{
    int sum=0,i,f,l;
    printf("enter the limits:");
    scanf("%d%d",&f,&l);
    for(i=f;i<=l;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
