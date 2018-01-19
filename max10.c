#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,n,k[15],temp;
    clrscr();
    printf("Enter the array size\t");
    scanf("%d\n",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d\t",&k[a]);
    }
    for(a=0;a<n-1;a++)
    {
        for(b=a+1;b<n;b++)
        {
            if(k[a]>k[b])
            {
                temp=k[a];
                k[a]=k[b];
                k[b]=temp;
            }
        }
    }
    printf("%d",k[n-1]);
    getch();

}
