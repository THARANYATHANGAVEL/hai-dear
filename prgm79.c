#include<stdio.h>
void main()
{
	int a,b,m,i;
	printf("Enter 2 number:");
	scanf("%d %d",&a,&b);
	m=a*b;
	for(i=0;i<1000;i++)
	{
		if(m==(i*i))
		{
			printf("yes");
		}
	}

		    printf("no");
	
}
