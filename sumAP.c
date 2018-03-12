#include<stdio.h>
void main()
{
    int A,B,C,sum=0,i;
    scanf("%d %d %d",&A,&B,&C);
    for(i=1;i<=C;i++)
    {
        sum=sum+A;
        A=A+B;
    }
    printf("%d",sum);
}
