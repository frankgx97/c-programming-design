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

	for (i=0; i<100000; i++)         /*利用循环结构，控制时钟运行的时间*/
	{ 
		Update(t);      /*时钟更新*/
		Display(t);     /*时间显示*/
		Delay();       /*延时1秒*/
	}    
}

int Update(struct clock *time)                  
{
	time->sec++;
	if (time->sec == 60)  /*若second值为60，表示已过一分钟，则 minutimee值加1*/
	{
		time->sec = 0;
		time->min++;
	}  
	if (time->min == 60)  /*若minutimee值为60，表示已过一小时，则 hour值加1*/
	{
		time->min = 0;
		time->hr++;
	}
	if (time->hr == 24)    /*若hour值为24，则hour的值从0开始计时*/
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





