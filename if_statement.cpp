#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Enter the first value = ";
	cin>>i;
		if(i>=85)
		{
			cout<<"WOW NICE A GRAED "<<endl;
		}
		else if(i>=75)
		{
			cout<<"B GRAED "<<endl;
		}
		else if(i>=65)
		{
			cout<<"C GRAED "<<endl;
		}
		else if(i>=55)
		{
			cout<<"D GRAED "<<endl;
		}
		else if(i>=45)
		{
			cout<<" PASS BY GRAED E "<<endl;
		}
		else
		{
			cout<<" SORRY TRY NEXT YEAR "<<endl;
		}
		return 0;
}
