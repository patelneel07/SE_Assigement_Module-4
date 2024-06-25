/*5. Write a C++ program to create a class called Rectangle that 
has private member variables for length and width. Implement 
member functions to calculate the rectangle's area and 
perimeter.*/
#include<iostream>
using namespace std;

class Rectangle
{
	int l,b;
	
	public :
		void get_lb()
		{
			cout<<"\n\n\t Enter the length : ";
			cin>>l;
			cout<<"\n\n\t Enter the breath : ";
			cin>>b;
		}
		
		void print_rectangle()
		{
			cout<<"\n\n\t Area of Rectangle : "<<l*b;
			cout<<"\n\n\t Perimeter of Rectangle : "<<2(l+b);
		}
};

	main()
	{
		Rectangle  R;
		
		R.get_lb();
		R.print_rectangle();	

	}
