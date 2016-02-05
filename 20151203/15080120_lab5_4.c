#include <stdio.h>

int main()
{
	int j,k,m,n,i,x=1;
	scanf("%d %d",&n,&m);
	int monkey[n+1];
	
	for (i=1;i<=n;i++)
		monkey[i]=1;
	
	i=0;
	for (k=1;k<=n-1;k++)
	{
		for (j=1;j<=m;j++)
		{
			i++;	
			if (i==n)
				i=1;
			
			if (monkey[i]==0)
				j--;
			//printf("i=%d \tj=%d\n",i,j);
		}
		monkey[i]=0;
		//printf("eliminated=%d\n",i);
	}
	
	
	for (i=1;i<=n;i++)
	{
		if (monkey[i]!=0)
			printf("\nKing=%d\n",i);
	}
}









