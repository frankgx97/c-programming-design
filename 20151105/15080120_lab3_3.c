#include <stdio.h>

int i,total=1;

int main()
{
	for (i=1;i<=9;i++)
	{
		total=(total+1)*2;
	}
	
	printf("%d\n",total);
}
