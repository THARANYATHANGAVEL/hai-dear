#include <stdio.h>
#iclude<conio.h>
void main()
{
    int n,p, rem, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    p = n;

    while (p!= 0)
    {
        rem = n%10;
        result += remr*rem*rem;
        n/= 10;
    }

    if(result == p)
        printf("%d is an Armstrong number.",p);
    else
        printf("%d is not an Armstrong number.",p);

    return 0;
}
