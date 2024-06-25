/*3. Write a C++ program to create a class called Car that has 
private member variables for company, model, and year. 
Implement member functions to get and set these variables. */

#include<iostream>
using namespace std;

class Car
{
	string comp_name;
	int comp_model;
	int comp_year;
	
	public :
		Car()
		{
			cout<<"\n\n\t ENter the Company name : ";
			cin>>comp_name;
			cout<<"\n\n\t Enter the Company Model : ";
			cin>>comp_model;
			cout<<"\n\n\t Enter the Company Year : ";
			cin>>comp_year;
		}
		void company()
		{
			cout<<"\n\n\t Company name : "<<comp_name;
			cout<<"\n\n\t Company Model : "<<comp_model;
			cout<<"\n\n\t Company Year : "<<comp_year;
		}
};
main()
{
	Car C;
	
	C.company();
}
