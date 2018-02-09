#include<stdio.h>
void main()
{
    int l,b,h,area,volume;
    scanf("%d %d %d",&l,&b,&h);
   area=2*(l*b+b*h+h*l);
   volume=l*b*h;
   printf("AREA=%d\nVOLUME=%d\n",area,volume);
}
