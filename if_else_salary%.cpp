#include<iostream>
using namespace std;
int main()
{
	char ename[20];
	float i,j;
	cout<<"Enter employee name = ";
	cin>>ename;
	cout<<"Working year in company = ";
	cin>>i;
	cout<<"Annual Income = ";
	cin>>j;
	if(i>=5)
	{
		cout<<"Your are take bonus "<<(j*5/100);
	}
	else if(i<=5)
	{
		cout<<"Your working year is "<<i<<" SORRY You cannot take bonus ";
	}
	else
	{
		cout<<"We are sorry you take bonus next year";
	}
	return 0;
}
