#include <stdio.h>
#include<conio.h>
void  main()
{
    int i, n, x= 0, y= 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", x);
         t= x+ y;
        x = y;
        y = t;
    }
    getch();
}
