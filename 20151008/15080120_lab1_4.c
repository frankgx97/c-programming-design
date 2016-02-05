20151008
设银行定期存款的年利率rate为2.25%，并已知存款期为n年，
存款本金为capital元，试编程计算n年后的本利之和deposit。要求定期存款的年利率rate、存款期n和存款本金capital均由键盘输入。*/

#include<stdio.h>
int main()
{
	long n,capital;
	float deposit=0;
	float rate;
	int i;
	printf("rate n capital\n");
	scanf("%f%d%d",&rate,&n,&capital);
	deposit = capital;
	for (i=1;i<=n;i++)
	{
		deposit = deposit * (1+rate);
	}
	printf("%f\n",deposit);
}
