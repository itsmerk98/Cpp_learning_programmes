#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class person
{
 	    int age;
 	    char name[23];
	public:
		void getdata();
		void display();
};
void person::getdata()
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter your age: ";
	cin>>age;
}
void person::display()
{
	cout<<"Student name: "<<name<<endl;
	cout<<"age: "<<age;
}
main()
{
person print;
print.getdata();
print.display();
return 0;
}/*
main()
{
	int i=12,j=5;
	int modResult=0;
	int divResult=0;
	
	modResult=i%j;
	cout<<modResult<<" ";
	
	divResult=i/modResult;
	cout<<divResult;
getch();
}*/
