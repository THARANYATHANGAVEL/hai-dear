#include <stdio.h>
#include<conio.h>
void main()
{
    char str[100];
    intcharacter,numbers, others, i;
    character= numbers = others = i =0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
      if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
     character++;
     }
        else if(str[i]>='0' && str[i]<='9')
        {
            numbers++;
        }
        else
        {
            others++;
        }

        i++;
    }

    printf("character= %d\n",character);
    printf("numbers= %d\n",numbers);
    printf("alphanumerical= %d", others);
    getch();
}
