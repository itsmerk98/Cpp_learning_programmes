#include<iostream>
using namespace std;
int main()
{
	int i=0,j,fact=1;
	cout<<"Enter the numder = ";
	cin>>j;
	for(i=1;i<=j;i++)
	{
		fact*=i;
	}
	
	cout<<"factorial of "<<j<<" is = "<<fact<<endl;
	return 0;
	
}
