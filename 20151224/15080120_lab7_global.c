#include  <stdio.h>
#include  <stdio.h>

int hour, minute, second;         /*ȫ�ֱ�������*/

/*�������ܣ�ʱ���֡���ʱ��ĸ���
  ������������
  ��������ֵ����
*/
void Update(void)                  
{
	second++;
	if (second == 60)  /*��secondֵΪ60����ʾ�ѹ�һ���ӣ��� minuteֵ��1*/
	{
		second = 0;
		minute++;
	}  
	if (minute == 60)  /*��minuteֵΪ60����ʾ�ѹ�һСʱ���� hourֵ��1*/
	{
		minute = 0;
		hour++;
	}
	if (hour == 24)    /*��hourֵΪ24����hour��ֵ��0��ʼ��ʱ*/
	{
		hour = 0;
	}
}

/*�������ܣ�ʱ���֡���ʱ�����ʾ
  ������������
  ��������ֵ����
*/
void Display(void)                     
{
	/*�ûس���'\r'����ʱ���֡�����ʾ��λ��*/
	printf("%2d:%2d:%2d\r", hour, minute, second); 
}

/*�������ܣ�ģ���ӳ�1���ʱ��
  ������������
  ��������ֵ����
*/
void Delay(void)                     
{
	long	t;

	for (t=0; t<50000000; t++)
    {
                /*ѭ����Ϊ������ѭ��������ʱ����*/
    }
}
/*������*/
main()
{
	long	i;

	hour = minute = second = 0;      /*hour,minute,second����ֵ0*/
	for (i=0; i<100000; i++)         /*����ѭ���ṹ������ʱ�����е�ʱ��*/
	{ 
		Update();      /*ʱ�Ӹ���*/
		Display();     /*ʱ����ʾ*/
		Delay();       /*��ʱ1��*/
	}    
}

