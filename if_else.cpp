#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"Enter your age = ";
cin>>age;
if(age>=70)
{
	cout<<" grandpa "<<endl;
}
else if(age>=18)
{
	cout<<" adult "<<endl;
}
else
{
	cout<<"you are not adult"<<endl;
}
return 0;
}
