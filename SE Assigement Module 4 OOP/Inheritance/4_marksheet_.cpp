//4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
#include <string>
using namespace std;


class Student 
{
	
    	string name;
    	int rollNumber;
		public:
			
    		void getData() 
			{
        		cout<<"\n\n\t Enter student name: ";
        		cin >> name;
        		cout<<"\n\n\t Enter roll number: ";
        		cin>>rollNumber;
    		}
    		void displayData() {
        		cout<<"\n\n\t Student Name: " <<name;
        		cout<<"\n\n\t Roll Number: " << rollNumber;
    		}
};

class Marks
	{

    int marks[5]; 
    
		public:
    			void getMarks() 
				{
        			cout<<"\n\n\t Enter marks for 5 subjects:";
        			for (int i = 0; i < 5; ++i) 
					{
            		cout<<"\n\n\t Subject"<<i+1;
            		cin>>marks[i];
        			}
    			}
    			void displayMarks() 
				{
        			cout<<"Marks : ";
         			for (int i = 0; i < 5; ++i) 
					{
            		cout<<"Subject "<<i+1<< marks[i];
        			}
    			}
};


class StudentMarkSheet : public Student, public Marks 
{
		public:
    			void displayMarkSheet() 
				{
        			displayData();
        			displayMarks();
    			}
};

main()
	{
    	StudentMarkSheet student;
    	student.getData();
    	student.getMarks();
    	cout << "\n\n";
    	student.displayMarkSheet();

    
}

