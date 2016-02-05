#include <stdio.h>

int main()
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
		printf ("height:%f",mh);
	}
	
	if (sex == 'F')
	{
		if (sport == 'Y')
			fh = fh*(1+0.02);
		if (diet == 'Y')
			fh = fh*(1+0.015);
		printf ("height:%f",fh);
	}
	
}
