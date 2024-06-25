//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor. 

#include<iostream>
using namespace std;

class Calc
{
	int n1,n2;
	
	public:
		Calc()
		{
			cout<<"\n\n\t Enter the number : ";
			cin>>n1;
			cout<<"\n\n\t Enter the number : ";
			cin>>n2;
		}
		
		void cons()
		{
			cout<<"\n\n\t Addition : "<<n1+n2;
			cout<<"\n\n\t Sustraction : "<<n1-n2;
			cout<<"\n\n\t Division : "<<n1/n2;
			cout<<"\n\n\t Multiplication : "<<n1*n2;
		}
};
main()
{
	Calc C;
	
	C.cons();
}
