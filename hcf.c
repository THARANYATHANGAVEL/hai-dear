#include <stdio.h>
#include<conio.h> 
void main()
{
    int x, y,z, i, gcd;
printf("Enter two integers: ");
 scanf("%d %d", &x, &y,&z);
 for(i=1; i <= x && i <=y && i<=z; ++i)
    {
    if(x%i==0 && y%i==0 && z%i==0)
    gcd = i;
    }
    printf("G.C.D of %d,%d and %d is %d", x, y,z, gcd);
    getch();
}
