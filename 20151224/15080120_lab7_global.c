#include  <stdio.h>
#include  <stdio.h>

int hour, minute, second;         /*全局变量定义*/

/*函数功能：时、分、秒时间的更新
  函数参数：无
  函数返回值：无
*/
void Update(void)                  
{
	second++;
	if (second == 60)  /*若second值为60，表示已过一分钟，则 minute值加1*/
	{
		second = 0;
		minute++;
	}  
	if (minute == 60)  /*若minute值为60，表示已过一小时，则 hour值加1*/
	{
		minute = 0;
		hour++;
	}
	if (hour == 24)    /*若hour值为24，则hour的值从0开始计时*/
	{
		hour = 0;
	}
}

/*函数功能：时、分、秒时间的显示
  函数参数：无
  函数返回值：无
*/
void Display(void)                     
{
	/*用回车符'\r'控制时、分、秒显示的位置*/
	printf("%2d:%2d:%2d\r", hour, minute, second); 
}

/*函数功能：模拟延迟1秒的时间
  函数参数：无
  函数返回值：无
*/
void Delay(void)                     
{
	long	t;

	for (t=0; t<50000000; t++)
    {
                /*循环体为空语句的循环，起延时作用*/
    }
}
/*主函数*/
main()
{
	long	i;

	hour = minute = second = 0;      /*hour,minute,second赋初值0*/
	for (i=0; i<100000; i++)         /*利用循环结构，控制时钟运行的时间*/
	{ 
		Update();      /*时钟更新*/
		Display();     /*时间显示*/
		Delay();       /*延时1秒*/
	}    
}

