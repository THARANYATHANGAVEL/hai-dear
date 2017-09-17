#include <stdio.h>
#include<conio.h>
void main()
{
    int f, l, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &f, &l);

    printf("Prime numbers between %d and %d are: ", f, l);

    while (f < l)
    {
        flag = 0;

        for(i = 2; i <= f/2; ++i)
        {
            if(f % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", f);

        ++f;
    }

    return 0;
}
