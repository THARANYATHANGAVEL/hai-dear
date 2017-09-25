#include<stdio.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int char c;
int i;
printf("Print 1 to 5 again and again");
while(1){
for(i=1;i<=5;i++)
     printf("\n%d",i);
    c=getch();
    if(c=='Q')
     exit(0);
     }
    getch();
    }
