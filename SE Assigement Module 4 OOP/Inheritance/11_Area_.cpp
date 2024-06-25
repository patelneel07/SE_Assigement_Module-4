//11.Write a program to calculate the area of circle,rectangle and triangleusing Function Overloading
#include<iostream>
using namespace std;
class value
{
     private:
               int a;
     public:
               void area(int l,int b )
               {
                    a = l * b ;
                    cout<<"\n\n\t Area of Rectangle : "<<a;
          
               }
               void area(float h,int l, int b)
               {
                    a = b * l * h ;
                    cout<<"\n\t Aera Of Triangle is : "<<a;
               }
               void area(int l)
               {
                    a = 3.14 * l * l ;
                    cout<<"\n\t aera of Circle is : "<<a;
               }
};
int main()
{
     value v;
     v.area(2,4);
     v.area(0.5,3,5);
     v.area(3);
}
