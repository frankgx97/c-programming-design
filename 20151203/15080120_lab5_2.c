#include <stdio.h>

/*�Ӽ�������һ���ࣨȫ����಻����30�ˣ�ѧ��ĳ�ſεĳɼ���������ɼ�Ϊ��ֵʱ��    ����������ֱ�ͳ���������ݣ�
��1��ͳ�Ʋ�������������ӡ������ѧ��������
��2��ͳ�Ƴɼ���ȫ��ƽ���ּ�ƽ����֮�ϵ�ѧ����������ӡ��ѧ��������
��3��ͳ�Ƹ������ε�ѧ����������ռ�İٷֱȣ�

ʵ����ʾ��
�����һ����Ҫ��Ӧ������������������Ԫ����������������Ԫʹ��ʱ������ͨ������������Ԫ���������ڣ����뺯������������׵�ַ����ʱ�������еĴ����Ƕ�ʵ����������ģ���������޸ģ����޸ĵ���ʵ�������ʵ�����ݡ�
*/

int main()
{
	int score[30];
	int i;
	for (i=0;i<=30;i++)
	{
		printf("%d��ѧ���ĳɼ�:\t",i);
		scanf("%d",&score[i]);
		if (score[i]<0)
			break;
	}
	fail(score,i);//������
	avr(score,i);//ƽ�� 
	dtl(score,i);//������ 
	
	
    	
    	
    	
}



int fail(int score[30],int n)
{
	int i,num=0;
	printf("Fail:\n");
	for (i=0;i<=n-1;i++)
	{
		if (score[i]<=60)
		{
			printf("%d\t%d\n",i,score[i]);
			num++;
		}
	}
	printf("Fail=%d\n\n",num);
	return n;
}


int avr(int score[30],int n)
{
	int i,total,num;
	for (i=0;i<=n-1;i++)
		total=total+score[i];
	printf("AVR=%d\nAbove AVR:\n",total/n);
	
	for (i=0;i<=n-1;i++)
	{
		if (score[i]>=total/n)
		{
			printf("%d\t%d\n",i,score[i]);
			num++;
		}
	}
	printf("Above AVR=%d\n",num);
	return 0;
}


int dtl(int score[30],int n)
{
	int i;
	int num[6];
	float numf[6];
	for (i=0;i<=6;i++)
	{
		num[i]=0;
		numf[i]=0;
	}
	for (i=0;i<=n-1;i++)
	{
		if (score[i]==100)
			num[1]++;
		if (score[i]<=99&&score[i]>=90)
			num[2]++;
		if (score[i]<=89&&score[i]>=80)
			num[3]++;
		if (score[i]<=79&&score[i]>=70)
			num[4]++;
		if (score[i]<=69&&score[i]>=60)
			num[5]++;
		if (score[i]<60)
			num[6]++;
	}	
	//numf[6]=(num[6]*100/n);
	//printf("%f %d %d\n",numf[6],num[6],n);
	
	printf("Details:\n\n<60\t%d\t%d%%\n",num[6],num[6]*100/n);
	printf("60-69\t%d\t%d%%\n",num[5],num[5]*100/n);
	printf("70-79\t%d\t%d%%\n",num[4],num[4]*100/n);
	printf("80-89\t%d\t%d%%\n",num[3],num[3]*100/n);
	printf("90-99\t%d\t%d%%\n",num[2],num[2]*100/n);
	printf("100\t%d\t%d%%\n",num[1],num[1]*100/n);
	
}
