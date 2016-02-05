#include <stdio.h>
int main()
{
	int i;
	int score[40];
	int count[11];
	
	for (i=0;i<=40;i++)
    	scanf("%d",&score[i]);
    	
    for (i=0;i<=11;i++)
    	count[i]=0;
    
    for (i=0;i<=40;i++)
    	count[score[i]]++;
    
    printf("grade\tcount\tHistogram\n");
    
    for (i=1;i<=10;i++)
    {
    	printf("%d\t%d\t",i,count[i]);
    	prtgrh(count[i]);
    	
	}

} 


int prtgrh(int n) //´òÓ¡ÐÇºÅÍ¼±í
{
	int i;
	for (i=1;i<=n;i++)
		printf("*")	;
	printf("\n");
	return 0;
}
