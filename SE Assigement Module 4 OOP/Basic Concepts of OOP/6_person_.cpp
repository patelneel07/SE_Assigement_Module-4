/*6. Write a C++ program to create a class called Person that 
has private member variables for name, age and country. 
Implement member functions to set and get the values of 
these variables. */
#include<iostream>
using namespace std;

class Person
{
	string name_p;
	int age_p;
	string country_p;

	public :
		void get_info()
		{
			cout<<"\n\n\t Enter the name : ";
			cin>>name_p;
			cout<<"\n\n\t Enter the Age : ";
			cin>>age_p;
			cout<<"\n\n\t Enter the Country : ";
			cin>>country_p;	
		}	
		
		void put_info()
		{
			cout<<"\n\n\t Name :"<<name_p;
			cout<<"\n\n\t age : "<<age_p;
			cout<<"\n\n\t country : "<<country_p;
		}
		
};

main()
{

	
	Person P;
	
		P.get_info();
		P.put_info();
}
