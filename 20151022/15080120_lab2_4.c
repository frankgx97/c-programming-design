#include <stdio.h>
main()
{
	char rpt;

	do
	{
		float    data1, data2;            /*定义两个操作符*/
		char   op;                   /*定义运算符*/	
		
	
		printf("Please enter the expression:");
		scanf("%f %c %f", &data1, &op, &data2);  /*输入运算表达式*/
	
		switch (op) 
		{
			case '+':                         /*处理加法*/
				printf("%f + %f = %f\n", data1, data2, data1 + data2); 
				break;
			case '-':                         /*处理减法*/
				printf("%f - %f = %f\n", data1, data2, data1 - data2);
				break;
			case '*':                         /*处理乘法*/
				printf("%f * %f = %f\n", data1, data2, data1 * data2); 
				break;
			case '/':                         /*处理除法*/
				if (0 == data2)
				    printf("Division by zero!\n");
				else  
				    printf("%f/%f = %f\n", data1, data2, data1/data2); 
				break;
			default: 
				printf("Unknown operator! \n");
		}
		printf("Do you want to continue?(Y/N or y/n)\n");
		getchar();
		scanf("%c",&rpt);
		getchar();
	}
	while (rpt == 'y'||rpt == 'Y');
	
}

