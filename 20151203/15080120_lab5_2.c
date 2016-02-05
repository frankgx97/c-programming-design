#include <stdio.h>

/*从键盘输入一个班（全班最多不超过30人）学生某门课的成绩，当输入成绩为负值时，    输入结束，分别统计下列内容：
（1）统计不及格人数并打印不及格学生名单；
（2）统计成绩在全班平均分及平均分之上的学生人数并打印其学生名单；
（3）统计各分数段的学生人数及所占的百分比；

实验提示：
数组的一个重要的应用是用数组作函数变元，当数组作函数变元使用时，与普通变量作函数变元的区别在于，传入函数的是数组的首地址，此时，函数中的代码是对实参数组操作的，如果发生修改，则修改的是实参数组的实际内容。
*/

int main()
{
	int score[30];
	int i;
	for (i=0;i<=30;i++)
	{
		printf("%d号学生的成绩:\t",i);
		scanf("%d",&score[i]);
		if (score[i]<0)
			break;
	}
	fail(score,i);//不及格
	avr(score,i);//平均 
	dtl(score,i);//分数段 
	
	
    	
    	
    	
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
