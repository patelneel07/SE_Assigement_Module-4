//1. Write a program to find the multiplication values and the cubic values using inline function 
#include<iostream>
using namespace std;

class Value
{
	int n;
	
	public:
			Value()
		{
			cout<<"\n\n\t Enter the number : ";
			cin>>n;
		
		}
		
		void muilt()
		{
			int c;
			c=n*n*n;
			cout<<"\n\n\t Cubic value : "<<c;
		}
		
};
main()
{
	Value V;
	
	V.muilt();
}
