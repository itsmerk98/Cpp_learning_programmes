#include<iostream>
using namespace std;
int main()
{
	float a;
	cout<<" Shoping amount = ";
	cin>>a;
	if(a>=1000)
	{
		cout<<" Paying Amount with 10% discount = "<<(a-a/100);
	}
	else
	{
		cout<<" No discount ";
	}
	return 0;
}
