#include <stdio.h>
#include <string.h>
/*
JuliusCaesar�����ڳ���Σ�պ���ı�������Ϊ�����棬���״η��������룬
���ھ��ӵ���Ϣ���ݡ���������Caesar�����е�һ�����٣���Ҫ��Caesar���͵���Ϣ����������ṩ����Ľ�������Ϣ�ļ��ܷ����ǣ�����Ϣԭ���е�ÿ����ĸ��
�ֱ��ø���ĸ��ĵ�5����ĸ�滻�������ַ����䡣����������಻����100�����ݼ���ÿ�����ݼ���3��������ɣ�
a)	��ʼ�У�START
b)	������Ϣ����1-200���ַ����һ�� ����ʾ������һ����Ϣ
c)	�����У�END
d)	�����һ�����ݼ�֮������һ�У�ENDOFINPUT
e)	���Ҫ��ÿ�����ݼ���Ӧ���У����ԭʼ��Ϣ
*/


int main()
{
	char start[10];
	char end[10];
	char msg[100][200];
	int num=0;
	
	int i;
	for (i=0;i<=100;i++)
	{
		
	
		//scanf("%s",&start);
		gets(start);
		if(strcmp(start,"ENDOFINPUT")==0)
			break;
		//scanf("%s",&msg[i]);//scanf���ܶ����ո���ַ�������gets����
		fgets(msg[i],200,stdin);//fgets���ȡ���з� 
		//scanf("%s",&end);
		gets(end);
		num++;	
	}

	for (i=0;i<=num-1;i++)
		decode(msg[i]);		
	//decode(msg[0]);
}

int decode(char msg[200])
{	
	int i;
	for (i=0;i<=200;i++)
	{
		if (msg[i]>='A'&&msg[i]<='Z')
		{
			if (msg[i]<='E')
				msg[i]=msg[i]+26;
			msg[i]=msg[i]-5;
		}
		
		if (msg[i]=='\n')
			break;
	}
	printf("%s\n",msg);
}








