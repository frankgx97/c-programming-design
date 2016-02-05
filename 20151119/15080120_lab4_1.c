#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int ch;
	printf("*************************************************\n*            Welcome to My C Application        *\n*                                               *\n*               Version 1.0                     *\n*                                               *\n*               Created By: Your name           *\n*                                               *\n*************************************************\n\n\n");
	system("pause");
	system("cls");
	printf("*****************************************************\n*    1. 计算银行定期存款本利之和                    *\n*    2. 身高预测                                    *\n*    3. 猜数游戏                                    *\n*    4. 自己设计（自选）                            *\n*    5. 退出                                        *\n*****************************************************\n");

	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			system("cls");
			func1();
			break;
		case 2:
			system("cls");
			func2();
			break;
		case 3:
			system("cls");
			func3();
			break;
		case 4:
			system("cls");
			func4();
			break;
		case 5:
			return 0;
	}
}

int func4()
{
	int i,j,k,l;
	for (i=0;i<=9;i++)
	{
		for (j=0;j<=9;j++)
		{
			for (k=0;k<=9;k++)
			{
				for (l=0;l<=9;l++)
				{
					if (i==j&&k==l&&j!=k&&sqrt(1000*i+100*j+10*k+l)==(int)(sqrt(1000*i+100*j+10*k+l)))
						printf("%d%d%d%d\n",i,j,k,l);
						return;
				}
			}	
		}
	}
}




int func1()
{
	long n,capital;
	float deposit=0;
	float rate;
	int i;
	printf("rate n capital\n");
	scanf("%f%d%d",&rate,&n,&capital);
	deposit = capital;
	for (i=1;i<=n;i++)
	{
		deposit = deposit * (1+rate);
	}
	printf("%f\n",deposit);
	return deposit;
}

int func2()
{
	float faHeight,moHeight;
	char sex,sport,diet;
	float mh,fh;
	
	printf("input sex\n");
	scanf("%c",&sex);
	printf("input father height\n");
	scanf("%f",&faHeight);
	printf("input mother height\n");
	scanf("%f",&moHeight);
	getchar();
	//scanf("%c",&diet);
	printf("sport\n");
	scanf("%c",&sport);
	getchar();
	printf("diet\n");
	scanf("%c",&diet);
	getchar();
	//cout<<"sport,diet\n";
	//cin>>sport>>diet;
	
	
//	printf("%c,%f,%f,%c,%c\n",sex,faHeight,moHeight,sport,diet);
	
	mh = (faHeight + moHeight)* 0.54;
	fh = (faHeight*0.923 + moHeight)/2;
	
	if (sex == 'M')
	{
		if (sport == 'Y')
			mh = mh*(1+0.02);
		if (diet == 'Y')
			mh = mh*(1+0.015);
		printf ("height:%f",mh);return;
	}
	
	if (sex == 'F')
	{
		if (sport == 'Y')
			fh = fh*(1+0.02);
		if (diet == 'Y')
			fh = fh*(1+0.015);
		printf ("height:%f",fh);return;
	}
	
}


/*15080120郭都豪，20151105*/
#include "stdio.h"
#include "time.h"


int func3() 
{
char q='n';
int a,b,c=1,d,e,f,g,h,i,num=0,flag;
char j;




while(1)
  {
  		flag=0;
  		c=1;
  		srand( (unsigned)time( NULL ) );
        i= rand()%100 + 1;
        printf("一个介于1-100的数字:") ;
 
             while(1)
	                   {
	                      scanf("%d",&a);
	                      getchar() ;
	                           if(a<i)
     	                          {
	                                 printf("小了,再猜一遍:");
                                     c=c+1;
                                  }
                               else if(a>i) 
                                  {
	                               	printf("大了,再猜一遍:");
                                    c=c+1;
                                  }
	                           else if(a=i) 
	                              {
	                                break;
                                  }
                                if (c>=10)
                                	{
									flag=1;
                                	break;
                               		}
      
     
                        }
               if(flag==1)
               	continue;
	           printf("猜对了,你猜了%d次,再来一遍？(Y or N)",c);
	           scanf("%c",&j);
	           getchar();

	
     	if(j=='n'||j=='N') 
        {
			break;
	    }
 
      }
     
      printf("\n");
      return 0;

}


