/*7. Write a C++ program to implement a class called Date that has 
private member variables for day, month, and year. Include 
member functions to set and get these variables, as well as to 
validate if the date is valid. */

#include<iostream>

using namespace std;

class Date
{
		int day;
		int month;
		int year;
	
	
	
		public :
				Date()
		
		{
			cout<<"\n\n\t Enter the day :";
			cin>>day;
			cout<<"\n\n\t Enter he Month :";
			cin>>month;
			cout<<"\n\n\t Enter the year : ";
			cin>>year;
		}
		
		
   			bool isValidDate() 
			   {
        			if (month < 1 || month > 12)
          			 return false;

        			if (day < 1)
            		return false;

        			if (month == 2) 
					{
            		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
					{
                	if (day > 29)
                    return false;
            		}
					else
					{
                	if (day > 28)
                    return false;
            		}
        			} else if (month == 4 || month == 6 || month == 9 || month == 11) 
					{
            		if (day > 30)
                	return false;
        			}
					else
					{
            		if (day > 31)
                	return false;
        			}

        			return true;
   
   }
};

int main()
{

		Date D;
		D.isValidDate();

	
    if (D.isValidDate()) 
	{
        cout << "Date is valid." << std::endl;
    } else {
        cout << "Date is invalid." << std::endl;
    }

    return 0;
}

