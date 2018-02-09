#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,a[15],tmp;
    printf("Enter the array size\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
    getch();

}
