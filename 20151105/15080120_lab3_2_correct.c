#include <stdio.h>
int a[255];
int n,i,sum=2;

int main()
{
	a[1]=1;
	a[2]=1;
	printf("input n.\n");
	scanf("%d",&n);
	
	for (i=3;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		//sum=sum+a[i];
	}
	printf("%d\n",a[n]);
	
}
