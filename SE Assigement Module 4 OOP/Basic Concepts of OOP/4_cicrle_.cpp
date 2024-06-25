/*4. Write a C++ program to implement a class called Circle that 
has private member variables for radius. Include member 
functions to calculate the circle's area and circumference.*/
#include<iostream>
using namespace std;

class Circle

{
	float r,pi;
	
	
	public :
		void get_radius()
		{
			pi=3.14;
			cout<<"\n\n\t Enter the radius : ";
			cin>>r;	
		} 
		
		void put_radius()
		{
			cout<<"\n\n\t Area of Circle : "<<r*r*pi;
			cout<<"\n\n\t Circumference of circle : "<<2*pi*r;
		}
		
};

	main()
	{
		Circle C;
		
		C.get_radius();
		C.put_radius();
		
	}
