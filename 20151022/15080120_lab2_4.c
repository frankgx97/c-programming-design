#include <stdio.h>
main()
{
	char rpt;

	do
	{
		float    data1, data2;            /*��������������*/
		char   op;                   /*���������*/	
		
	
		printf("Please enter the expression:");
		scanf("%f %c %f", &data1, &op, &data2);  /*����������ʽ*/
	
		switch (op) 
		{
			case '+':                         /*����ӷ�*/
				printf("%f + %f = %f\n", data1, data2, data1 + data2); 
				break;
			case '-':                         /*�������*/
				printf("%f - %f = %f\n", data1, data2, data1 - data2);
				break;
			case '*':                         /*����˷�*/
				printf("%f * %f = %f\n", data1, data2, data1 * data2); 
				break;
			case '/':                         /*�������*/
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

