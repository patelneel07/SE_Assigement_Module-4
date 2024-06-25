/*8. Write a C++ program to implement a class called Student that
has privatemember variables for name, class, roll number, and 
marks. Include member functions to calculate the grade based 
on the marks and displaythe student's information. Accept 
address from each student implement using of aggregation*/

#include<iostream>

using namespace std;

class Student
{
	string sname;
	int sclass;
	int roll_no;
	int smarks;

	public: 
	
		Student()
		{
			cout<<"\n\n\t Enter student name :";
			cin>>sname;
			cout<<"\n\n\t Enter student class : ";
			cin>>sclass;
			cout<<"\n\n\t Enter Roll No.: ";
			cin>>roll_no;
			cout<<"\n\n\t Enter student Marks : ";
			cin>>smarks;	
		}	
		
		void get_data()
		{
			if(smarks>=90)
			{
				cout<<"\n\n\t Grade A";
			}
			else if(smarks>=70)
			{
				cout<<"\n\n\t Grade B";
			}
			else if(smarks>=50)
			{
				cout<<"\n\n\t Grade C";
			}
			else 
			{
				cout<<"\n\n\t Fail ";
			}
		}
};

main()
{
	Student S;
	S.get_data();
}
