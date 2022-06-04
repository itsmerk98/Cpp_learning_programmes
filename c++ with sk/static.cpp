/*
  		static members -
  		static data members 
  		- static data members are created used 'static' keyword
  		- they have some special characteristics
  		  -their only copy is create w.r. to a class and that is shared by all the object of the c 
  		  -they are object independent i.e. they can be access without object name (by using class name) therefore they are 
			also called class varivle.
  		  -they get initialized with default value.
  		  -static variable need to be defined outside the class definetion because static data members are stored separately.
  		  
  size of class = sun if size of individual non-static dara members
*/

#include<iostream>
#include<conio.h>
using namespace std;

class SDemo
{
	int a;
	static int x;
public:
	int b;
	static int y;
};

int SDemo::x=10;
int SDemo::y=15;

int main()
{
	cout<<sizeof(SDemo);
	//cout<<SDemo::a;			non static can't access without object
	//cout<<SDemo::x;			private member can't access outside class
	//cout<<SDemo::b;			non static can't access without object
	cout<<SDemo::y<<endl;
	SDemo d1,d2;
	d1.b=10;
	d2.b-20;
	d1.y=30;
	d2.y=40;
	cout<<endl<<d1.b;
	cout<<endl<<d2.b;
	cout<<endl<<d1.y;
	cout<<endl<<d2.y;
	return 0;
}
