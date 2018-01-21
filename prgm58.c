#include <stdio.h>
#include<conio.h>
void  main()
{
    int x,y,i;
    scanf("%d\t%d",&x,&y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d\t%d",x,y);
    getch();
}
