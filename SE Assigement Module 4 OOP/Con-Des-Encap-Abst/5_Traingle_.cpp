/*5. Write a C++ program to create a class called Triangle that has 
private member variables for the lengths of its three sides. 
Implement member functions to determine if the triangle is 
equilateral, isosceles, or scalene. */
#include<iostream>
using namespace std;

class Triangle
{
	int side1,side2,side3;
	
	public:

		void sides()
{
	cout<<"\n\n\t ENter the side1 : ";
	cin>>side1;
	cout<<"\n\n\t Enter the side2 : ";
	cin>>side2;
	cout<<"\n\n\t Enter the side3 : ";
	cin>>side3;
}
		void classifyTriangle() 
		{
        if (side1 == side2 && side2 == side3) 
		
		{
            cout << "\n\n\t Equilateral Triangle";
        }
		
		else if (side1 == side2 || side1 == side3 || side2 == side3) 
		
		{
            cout << "\n\n\t Isosceles Triangle";
        } 
		
		else 
		
		{
            cout << "\n\n\t Scalene Triangle ";
        }
    }

};
main()
{


	Triangle S;
	{
		S.sides();
		S.classifyTriangle();
	}

}

