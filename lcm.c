#include <stdio.h>
#include<conio.h>
void main()
{
    int x, y, min;
    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);
    min= (x>y) ? x : y;

    // Always true
    while(1)
    {
        if( min%x==0 && min%y==0 )
        {
            printf("The LCM of %d and %d is %d.",x,y,min);
            break;
        }
        ++min;
    }
    getch();
}
