#include "stdio.h"
#include "time.h"

char q='n';
int main() 
{
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

