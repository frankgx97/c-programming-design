#include <stdio.h>
#include <string.h>
/*
JuliusCaesar生活在充满危险和阴谋的年代，为了生存，他首次发明了密码，
用于军队的消息传递。假设你是Caesar军团中的一名军官，需要把Caesar发送的消息破译出来并提供给你的将军。消息的加密方法是：对消息原文中的每个字母，
分别用该字母后的第5个字母替换，其他字符不变。输入数据最多不超过100个数据集，每个数据集由3个部分组成：
a)	起始行：START
b)	密码消息：由1-200个字符组成一行 ，表示发出的一条消息
c)	结束行：END
d)	在最后一个数据集之后是另一行：ENDOFINPUT
e)	输出要求：每个数据集对应以行，输出原始消息
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
		//scanf("%s",&msg[i]);//scanf不能读带空格的字符串，用gets代替
		fgets(msg[i],200,stdin);//fgets会读取换行符 
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








