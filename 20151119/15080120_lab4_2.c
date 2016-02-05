#include <stdio.h>
#include <time.h>

int main()
{
	
	int a,b,op,ipt,n=0;
	int r = 0,w = 0;
	int rst;
	char o;
	srand( (unsigned)time( NULL ) );
    
    while (n<10)
    {
    	
		a = rand()%10 + 1;
	    b = rand()%10 + 1;
	    op = rand()%4 + 1;
	
	    
	    switch(op)
	    {
	    	case 1:
	    		rst=a+b;
	    		o='+';
	    		break;
	    	case 2:
	    		rst=a-b;
	    		o='-';
	    		break;
	    	case 3:
	    		rst=a*b;
	    		o='*';
	    		break;
	    	case 4:
	    		rst=a/b;
	    		o='/';
	    		break;
		}
		printf("%d%c%d\n",a-10,o,b);
	
		scanf("%d",&ipt);
		if (ipt == rst)
		{
			printf("Right\n");
			r++;
		 } else
		 {
		 	printf("wrong\n");
		 	w++;
		 }
		 
		 n++;
		 printf("%d",n);
	    
	}	
	printf("score=%d	error=%d\n",r*10,w);
}
