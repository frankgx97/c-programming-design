#include <stdio.h>

int main()
{
	int year;
	float amount,total,rate;
	printf ("amount year\n");
	scanf ("%f%d",&amount,&year);
	//printf("%f,%d\n",amount,year);
	
	switch (year)
	{
		case 1:
			rate = 2.25/100;
			break;
		case 2:
			rate = 2.43/100;
			break;
		case 3:
			rate = 2.70/100;
			break;
		case 5:
			rate = 2.88/100;
			break;
		case 8:
			rate = 3.00/100;
			break;
	}
	//printf("%f\n",rate);
	total = (1+rate)*amount;
	printf ("total=%f\n",total);
	
}
