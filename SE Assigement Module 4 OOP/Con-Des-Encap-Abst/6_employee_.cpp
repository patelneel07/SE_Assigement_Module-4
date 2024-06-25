/*6. Write a C++ program to implement a class called Employee 
that has private member variables for name, employee ID, 
and salary. Include member functions to calculate and set 
salary based on employee performance. Using of 
constructor*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
    string ename;
    int emp_id;
    int salary;

public:
    	Employee() 
	{
    	
    	cout<<"\n\n\t Enter the employeee name : ";
    	cin>>ename;
    	cout<<"\n\n\t Enter the ID : ";
    	cin>>emp_id;
        salary = 0;
    }

    void set_salary(int per) {
        if (per > 8) {
            salary = 20000;
        }
        else if (per > 6) {
            salary = 15000;
        }
        else if (per > 4) {
            salary = 12000;
        }
        else {
            salary = 10000;
        }
    }

    void displayInfo() {
        cout << "\n\n\t Employee Name: " << ename << endl;
        cout << "\n\n\t Employee ID: " << emp_id << endl;
        cout << "\n\n\t Salary: $" << salary << endl;
    }
};

int main() {
    Employee E;
    int performance;
    
    	cout << "\n\n\t Enter performance rating (out of 10): ";
    	cin >> performance;
    	
    E.set_salary(performance);
    E.displayInfo();
    return 0;
}

