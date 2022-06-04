#include<iostream>
using namespace std;
int main()
{
	int i=0,a=0,b=1,sum,n;
	cout<<" Enter the number for print fibonacci seried = ";
	cin>>n;
	while(i<n)
	{
		cout<<" "<<a;
		sum=a+b;
		i++;
		a=b;
		b=sum;
	}
	return 0;
}
