//1. WAP to create simple calculator using class 

#include<iostream>
using namespace std;

class Calc
{
		int n1, n2;
		
		public :
				void get_numbers()
				{
					cout<<"\n\n\t Enter the number : ";
					cin>>n1;
					cout<<"\n\n\tEnter the number : ";
					cin>>n2;
				}
				void put_number()
				{
					cout<<"\n\n\t Addition : "<<n1+ n2;
					cout<<"\n\n\t Substration : "<<n1-n2;
					cout<<"\n\n\t Multiplication : "<<n1*n2;
					cout<<"\n\n\t Divivsion : "<<n1/n2;
				}
				
};

main()
{
	Calc C;
	C.get_numbers();
	C.put_number();
}
			
