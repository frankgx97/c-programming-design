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
        printf("һ������1-100������:") ;
 
             while(1)
	                   {
	                      scanf("%d",&a);
	                      getchar() ;
	                           if(a<i)
     	                          {
	                                 printf("С��,�ٲ�һ��:");
                                     c=c+1;
                                  }
                               else if(a>i) 
                                  {
	                               	printf("����,�ٲ�һ��:");
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
	           printf("�¶���,�����%d��,����һ�飿(Y or N)",c);
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

