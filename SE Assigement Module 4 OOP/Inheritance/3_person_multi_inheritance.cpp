/*3. Create a class person having members name and age. Derive
a class studenthaving member percentage. Derive another 
class teacher having member salary. Write necessary 
member function to initialize, read and write data. Write also
Main function (Multiple Inheritance)*/

#include <iostream>
#include <string>
using namespace std;


class Person
{
protected:
    string name;
    int age;

public:
    
    Person(const string &n, int a) : name(n), age(a) {}

    Person() : age(0) {}


    void readData()
    {
        cout << "\n\n\t Enter name: ";
        cin >> name;
        cout << "\n\n\t Enter age: ";
        cin >> age;
    }


    void displayData()
    {
        cout << "\n\n\t Name: " << name;
        cout << "\n\n\t Age: " << age;
    }
};


class Student : public Person
{
protected:
    float percentage;

public:
    
    Student(const string &n, int a, float p) : Person(n, a), percentage(p) {}

    
    Student() : percentage(0.0) {}

    
    void readData()
    {
        Person::readData();
        cout << "\n\n\t Enter percentage: ";
        cin >> percentage;
    }

    
    void displayData()
    {
        Person::displayData();
        cout << "\n\n\t Percentage: " << percentage << "%";
    }
};


class Teacher : public Person
{
protected:
    float salary;

public:
    
    Teacher(const string &n, int a, float s) : Person(n, a), salary(s) {}

    
    Teacher() : salary(0.0) {}

    
    void readData()
    {
        Person::readData(); 
        cout << "\n\n\t Enter salary: ";
        cin >> salary;
    }

    void displayData()
    {
        Person::displayData(); 
        cout << "\n\n\t Salary: $" << salary;
    }
};


int main()
{
    Student s;
    Teacher t;

    cout << "\n\n\t Enter student details:";
    s.readData();

    cout << "\n\n\t Enter teacher details:";
    t.readData();

    cout << "\n\n\t Student details:";
    s.displayData();

    cout << "\n\n\t Teacher details:";
    t.displayData();

    return 0;
}

