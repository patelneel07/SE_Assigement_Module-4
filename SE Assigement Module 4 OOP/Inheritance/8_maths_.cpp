/*8. Write a program to Mathematic operation like Addition, 
Subtraction, Multiplication, Division Of two number using 
different parameters and Function Overloading */

#include<iostream>
using namespace std;
class maths
{
     private:
     	
     	int c;
     			public:
          			void add(int a,int b)
          			{
               			c = a + b ;
               			cout<<"\n\n\t Addition :"<<c;
          			}
          			void add(int a,int b,int d)
          			{
               			c=a-b-d ;
               		cout<<"\n\n\t Subtraction :"<<c;
          			}
          			void add(int a,int b,int d,int e)
          			{
               			c = a * b ;
               		cout<<"\n\n\t Multiplication :"<<c;
          			}
          			void add(int a,int d,int e,int b,int f)
          			{
               		c = a / b ;
               		cout<<"\n\n\t Divison :"<<c;
          			}

};
int main()
{
     maths M;
     M.add(5,6);
     M.add(3,2,1);
     M.add(4,5,3,3);
     M.add(20,6,3,5,4);
}
