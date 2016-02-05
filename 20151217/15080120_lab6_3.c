#include <stdio.h>
#include <stdlib.h>

int main()
{
	int  *score = NULL,maxscore=0,maxclass,maxnumber,i,m,n;
	printf("Please enter array size m,n:");
	scanf("%d,%d", &m,&n);                  
	score = (int *) malloc(n * sizeof (int));    
	if (score == NULL) 
	{
    	printf("No enough memory!\n");
    	exit(0); 
	}
	printf("Please enter the score:\n");	
	for (i=0;i<=m*n-1;i++)
	{
		scanf("%d",score+i);
		if (*(score+i)>maxscore)
		{
			maxscore = *(score+i);
			maxclass = ((i+n+1)/n);
			//maxnumber = i%3+2;
			maxnumber = (i+1)-(maxclass-1)*n;
		}
	}
	printf("MaxScore=%d,MaxClass=%d,MaxNumber=%d.\n",maxscore,maxclass,maxnumber);
}
