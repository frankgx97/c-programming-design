#include<stdio.h>
#include<stdlib.h>


struct clock
{
	int hr;
	int min;
	int sec;
} CLOCK;


void main()
{
	long i;
	struct clock *t;
	t = &CLOCK;

	for (i=0; i<100000; i++)         /*����ѭ���ṹ������ʱ�����е�ʱ��*/
	{ 
		Update(t);      /*ʱ�Ӹ���*/
		Display(t);     /*ʱ����ʾ*/
		Delay();       /*��ʱ1��*/
	}    
}

int Update(struct clock *time)                  
{
	time->sec++;
	if (time->sec == 60)  /*��secondֵΪ60����ʾ�ѹ�һ���ӣ��� minutimeeֵ��1*/
	{
		time->sec = 0;
		time->min++;
	}  
	if (time->min == 60)  /*��minutimeeֵΪ60����ʾ�ѹ�һСʱ���� hourֵ��1*/
	{
		time->min = 0;
		time->hr++;
	}
	if (time->hr == 24)    /*��hourֵΪ24����hour��ֵ��0��ʼ��ʱ*/
	{
		time->hr = 0;
	}
}

int Display(struct clock *time)                     
{
	printf("%2d:%2d:%2d\r", time->hr, time->min, time->sec); 
}

int Delay(void)                     
{
	long	t;

	for (t=0; t<50000000; t++)
    {
		//delay
    }
}





