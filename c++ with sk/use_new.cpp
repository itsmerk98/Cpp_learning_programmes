#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *arr,n,i,j;
	
	cout<<"Enter no of elements to store: ";
	cin>>n;
	
	arr=new int[n];       //create dynamic memory for n int
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter element"<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"\nBefore sorting elements are :- "<<endl;
	for(i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	for(i=1;i<n;i++)
	{
	    for(j=1;i<n-i;j++)
	    {
	    	if(arr[j]<arr[j+1])
	    	{
	    		int tep=arr[j];
	    		arr[j]=arr[j+1];
	    		arr[j+1]=tep;
			}
		}
	}	
	cout<<endl<<"After sothin elements are :- ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
getch();
}
