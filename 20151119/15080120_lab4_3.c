#include <stdio.h>

long fac(int n)
{
	long factk;
	
	if (n>0)
		factk = n*fac(n-1);
	else
		factk=1;
	//printf("%d\n",factk);
	return factk;
	
}

int main()
{
	int k,m;
	printf("k,m\n");
	scanf("%d %d",&k,&m);
	//printf("%d%d",k,m);
	//fac(k);
	printf("%d",fac(k)/fac(m-k));
	
}


