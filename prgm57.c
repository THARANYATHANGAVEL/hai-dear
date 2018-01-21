#include <stdio.h>
#include<conio.h>
void  main()
{
    int x,y,t;
    scanf("%d\t%d",&x,&y);
    t=x;
    x=y;
    y=t;
    printf("%d\t%d",x,y);
    getch();
    }
