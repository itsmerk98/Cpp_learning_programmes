#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	int x,y;
	public:
		complex(int x1, int y1)
		{
			x = x1;
			y = y1;
		}
		void Alaf()
		{
			cout<<"show me value for x : "<<x<<endl;
			cout<<"value for the Y : "<<y;
		}
		
};
int main()
{
	complex j(10,20);
	j.Alaf();
	return 0;
}
