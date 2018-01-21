#include <stdio.h>
#include<conio.h>
void  main()
{
    int j, n, x= 0, y= 1, t;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (j = 1; j <= n; ++j)
    {
        printf("%d", x);
         t= x+ y;
        x= y;
        y= t;
    }
    getch();
    }
