#include <stdio.h>
#include<conio.h>
void main()
{
    char str[100];
    int character, i;
    character =0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
      if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
     character++;
  }
        i++;
    }

    printf("character= %d\n",character);
    getch();
}
