#include <stdio.h>
int main()
{
	int matrix[5][5]={
	{17,24,1,8,15},
	{23,5,7,14,16},
	{4,6,13,20,22},
	{10,12,19,21,3},
	{11,18,25,2,9}
	};
	int i,j,k;
	int flag=0;
	for (i=1;i<=4;i++)
	{
		if (hori(matrix,i)==hori(matrix,i-1))
		{
			if(verti(matrix,i)==verti(matrix,i-1))
			{
				if(hori(matrix,i)==verti(matrix,i-1))
				{
					if(diag(matrix,0)==diag(matrix,1))
					{
						flag=1;
					}
				}
			}
		}
	}
	if (flag==1)
	{
		printf("It is a magic square!\n");
	}
	for(k=0;k<5;k++)
	{
		for(j=0;j<5;j++)
		{
			printf("%3d",matrix[k][j]);
			printf("\t");
		}
		printf("\n");
	}
}

int hori(int matrix[5][5],int i)
{
	int m,sum=0;
	for (m=0;m<=4;m++)
	{
		sum=sum+matrix[i][m];
		//printf("i=%d,sum=%d\n",i,sum);
	}
	return sum;
}

int verti(int matrix[5][5],int i)
{
	int m,sum=0;
	for (m=0;m<=4;m++)
	{
		sum=sum+matrix[m][i];
		//printf("i=%d,sum=%d\n",i,sum);
	}
	return sum;
}

int diag(int matrix[5][5],int i)
{
	int m,sum=0;
	if (i==0)
	{
		for (m=0;m<=4;m++)
		{
			sum=sum+matrix[m][m];
			//printf("i=%d,sum=%d\n----\n",i,sum);
		}
	}
	else
	{
		for (m=0;m<=4;m++)
		{
			sum=sum+matrix[m][4-m];
			//printf("i=%d,sum=%d\n----\n",i,sum);
		}
	}
	return sum;
}




