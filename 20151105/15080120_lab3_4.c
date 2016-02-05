#include <stdio.h>

int i,n=0;
float e=1,j=1;

int main()
{
	while(1)
	{
		n=n+1;
		for (i=1;i<=n;i++)
		{
			j=j*i;
		}
		j=1/j;
		e=e+j;
		if (j<1/10^5)
			break;
	}
	printf("%f",e);
}
