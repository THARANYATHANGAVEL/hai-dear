#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i,j,l;
    printf("Enter the string\n");
    scanf("%[^\n]s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            for(j=i;j<l;j++)
            {
            a[j]=a[j+1];
            }
        }
    }
    printf("%s",a);
    return 0;
}
