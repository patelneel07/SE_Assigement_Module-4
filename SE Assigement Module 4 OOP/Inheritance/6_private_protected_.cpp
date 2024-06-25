//6. Write a C++ Program to show access to Private Public and Protected using Inheritance 

#include<iostream>
using namespace std;
class emp
{
     private:
          string ename;
     protected:
          int eno;
     public:
          int age;
      void employee_name()
     {    
          cout<<"\n\n\t Enter the Name of Employe : ";
          cin>>ename;
     }
         
          void print_name()
          {
               cout<<"\n\n\t Employee Name :"<<ename;
          }

};
class Show : public emp
{
     public:
     void employee_number()
          {
               employee_name();
               cout<<"\n\n\t Enter The Number of Employe : ";
               cin>>eno;
          }
     void employee_age()
     {
          cout<<"\n\n\t Enter Employee Age : ";
          cin>>age;
     }
     void print_info()
     {
          print_name();
          cout<<"\n\n\t Employee num : "<<eno;
          cout<<"\n\n\t Employee Age : "<<age;
     }
};
main()
{
     Show S;
     S.employee_number();
     S.employee_age();
     S.print_info();
}
