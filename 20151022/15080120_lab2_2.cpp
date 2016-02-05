#include <iostream>
using namespace std;
int main()
{
	float t,w,h;
	cout<<"w(kg),h(m)\n";
	cin>>w>>h;
	t=w/(h*h);
	
	if (t<=18)
		cout<<"low\n";
	else if (t>=18 && t<25)
		cout<<"normal\n";
	else if (t>=25 && t<27)
		cout<<"overweight\n";
	else if (t>=27)
		cout<<"too fat!\n";
	else
		cout<<"err\n";
}
