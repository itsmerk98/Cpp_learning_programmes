#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter value for a = ";
	cin>>a;
	cout<<"Enter value for b = ";
	cin>>b;
	cout<<"Adition a+b = "<<(a+=b)<<endl;
	cout<<"subtration a-b = "<<(a-=b)<<endl;
	cout<<"multiplition a*b = "<<(a*=b)<<endl;
	cout<<"divide a/b = "<<(a/=b)<<endl;
	cout<<"mod of a%b = "<<(a%=b)<<endl;
	return 0;
}
