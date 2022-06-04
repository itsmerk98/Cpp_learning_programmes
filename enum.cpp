#include<iostream>
using namespace std;

enum week {sunday, monday, tusday=5, wednesday=-5, thursday, friday, saturday
};

int main()
{
	week currentday;
	currentday = wednesday;
	cout<<endl<<endl<<"day "<<currentday;
	cout<<endl<<"day "<<currentday+3;
	return 0;
}
