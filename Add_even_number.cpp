#include<iostream>
using namespace std;
int main()
{
	int i,j,sum=0;
	cout<<"enter end of even number = ";
	cin>>j;
	for(i=0;i<=j;i++)
	{
		if(i%2==0)
		{
			cout<<i<<endl;
		}
		else
		{
			continue;
		}
	}
	for(i=0;i<=j;i++)
	{
		if(i%2==1)
		sum+=i;
	}
	cout<<"sum of all even numbers = "<<sum<<endl;
	return 0;
}
