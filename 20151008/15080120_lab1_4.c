20151008
�����ж��ڴ���������rateΪ2.25%������֪�����Ϊn�꣬
����ΪcapitalԪ���Ա�̼���n���ı���֮��deposit��Ҫ���ڴ���������rate�������n�ʹ���capital���ɼ������롣*/

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
