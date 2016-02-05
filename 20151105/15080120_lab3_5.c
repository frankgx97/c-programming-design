#include <stdio.h>
#include <math.h> 

int main()
{
	int i,j,k,l;
	for (i=0;i<=9;i++)
	{
		for (j=0;j<=9;j++)
		{
			for (k=0;k<=9;k++)
			{
				for (l=0;l<=9;l++)
				{
					if (i==j&&k==l&&j!=k&&sqrt(1000*i+100*j+10*k+l)==(int)(sqrt(1000*i+100*j+10*k+l)))
						printf("%d%d%d%d\n",i,j,k,l);
				}
			}	
		}
	}
}
