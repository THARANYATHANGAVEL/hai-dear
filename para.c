#include <stdio.h>
#include <string.h>
main()
{
    char a[50];
    int count = 0, i;
 
    printf("enter the string\n");
    gets(a);
    for (i = 0;a[i] != '\0';i++)
    {
        if (a[i] == '.')
            count++;    
    }
    printf("%d\n", count+1);
}
