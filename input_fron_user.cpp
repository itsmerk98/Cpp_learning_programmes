#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the first value as a = ";
	cin>>a;
	cout<<"Enter the second value as b = ";
	cin>>b;
	if(a>b)
	{
		cout<<" Value A is greater then B ";
	}
	else if(a<b)
	{
		cout<<" value B is gerater then A ";
	}
	else
	{
		cout<<"A and B is equel ";
	}
	return 0;
}
