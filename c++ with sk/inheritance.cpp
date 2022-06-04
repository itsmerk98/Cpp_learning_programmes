#include<iostream>
using namespace std;
class base
{
	public:
		void display1()
		{
			cout<<endl<<"I am in base class : ";
		}
};
class der : public base
{
	public:
		void display2()
		{
			cout<<endl<<"I am in der. class : ";
		}
};

int main()
{
	der d;
	d.display1(); // calling base class member function display1 through the derived class object.
return 0;
}
