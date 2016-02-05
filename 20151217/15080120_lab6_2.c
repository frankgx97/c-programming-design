#include <stdio.h>
#include <stdlib.h>
int compDec(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int main()
{
	int num;
	int i,j,k,p,search,l;
	int score[30][6];
	int sort[30];
	printf("Please enter the total number of the students(n<=30):\n");
	scanf("%d",&num);
	printf("Enter No. and score as: MT  EN  PH\n");
	for (i=0;i<num;i++)
	{
		scanf("%d %d %d %d",&score[i][0],&score[i][1],&score[i][2],&score[i][3]);
		score[i][4]=score[i][1]+score[i][2]+score[i][3];
		sort[i]=score[i][4];
		score[i][5]=score[i][4]/3;
		//printf("%d\n",score[i][0]);
	}
	
	for (i=0;i<=5;i++)
		score[num+1][i]=-1;
	
	printf("\nBefore sort:\nNO\tMT\tEN\tPH\tSUM\tAVER\n");
	
	for(k=0;k<num;k++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d",score[k][j]);
			printf("\t");
		}
		printf("\n");
	}

	qsort(sort, num, sizeof(sort[0]), compDec);  
	
	printf("\nAfter sort:\nNO\tMT\tEN\tPH\tSUM\tAVER\n");
	for (i=0;i<=num-1;i++)
	{
		for (j=0;j<=num-1;j++)
		{
			if (sort[i]==score[j][4])
			{
				for (k=0;k<=5;k++)
					printf("%d\t",score[j][k]);
				printf("\n");
			}
		}
	}
	
	printf("\nPlease enter searching number:\n");
	scanf("%d",&search);
	
	for (j=0;j<=num-1;j++)
	{
		if (search==score[j][0])
		{
			for (l=0;l<=num-1;l++)
			{
				if (sort[l]==score[j][4])
				{
					printf("Position:%d\nNO\tMT\tEN\tPH\tSUM\tAVER\n",l+1);
					for (k=0;k<=5;k++)
						printf("%d\t",score[j][k]);
					printf("\n");
				}
			}
		}
	}	
}







