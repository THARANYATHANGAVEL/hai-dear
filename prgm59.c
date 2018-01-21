#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k[15],temp;
    clrscr();
    printf("Enter the array size\t");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&k[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(k[i]>k[j])
            {
                temp=k[i];
                k[i]=k[j];
                k[j]=temp;
            }
        }
    }
    printf("%d",k[n-1]);
    getch();

}
