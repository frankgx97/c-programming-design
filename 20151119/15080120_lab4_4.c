#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",fib(n));
 	
 	 
	
}

int fib(int n)
{
	if (n>2)
		return fib(n-1)+fib(n-2);
	else 
		return 1;
}
