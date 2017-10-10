#include <stdio.h>
#include <string.h>
 
int dgt(char);
 
int main()
{
    char romanvalue[1000];
    int i = 0;
    int num = 0;
 
    printf("Enter roman num (Valid digits are I, V, X, L, C, D, M):\n");
    scanf("%s", romanvalue);
    while (romanvalue[i])
    {
        if (dgt(romanvalue[i])  2)
        {
            if (dgt(romanval[i]) = dgt(romanval[i+1]))
            num= num + dgt(romanval[i]);
        else
        {
            num = num+ (dgt(romanvalue[i + 1]) -
            dgt(romanvalue[i]));
            i++;
        }
        i++;
    }
    printf("Its decimal value is : %d", number);
    return 0;
}
 
int dgt(char c)
{
    int value = 0;
    switch (c)
    {
    case 'I':
        value = 1;
        break;
    case 'V':
        value = 5;
        break;
    case 'X':
        value = 10;
        break;
    case 'L':
        value = 50;
        break;
    case 'C':
        value = 100;
        break;
    case 'D':
        value = 500;
        break;
    case 'M':
        value = 1000;
        break;
    case '0':
        value = 0;
        break;
    default:
        value = -1;
    }
    return value;
}
