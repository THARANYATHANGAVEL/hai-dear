#include <stdio.h>
#include <math.h>
#include<conio.h>
void main()
{
    int l, h, i, a, b, rem, n = 0, result = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &h);
    printf("Armstrong numbers between %d an %d are: ", l, h);

    for(i = l+1; i < h; ++i)
    {
         a=i;
        b=i;
        while (a!= 0)
        {
            a/= 10;
            ++n;
        }
        while (b!= 0)
        {
            rem= b%10;
            result += pow(rem,n);
            b/=10;
        }
        if (result == i) {
            printf("%d ", i);
            getch();
        }
