/*1. Assume a class cricketer is declared. Declare a derived class 
batsman from cricketer. Data member of batsman. Total 
runs, Average runs and best performance. Member functions 
input data, calculate average runs, Display data. (Single 
Inheritance) */

#include<iostream>
using namespace std;

class Cricketer 
{

	string name;
	int age;
	int matchesplayed;
	
	public :
		
			void get_info()
			{
			cout<<"\n\n\t Enter the name :";
			cin>>name;	
			
			cout<<"\n\n\t Enter the age :";
			cin>>age;
			
			cout<<"\n\n\t Enter the Match played :";
			cin>>matchesplayed;
			}
			
			void put_info()
			{
				cout<<"\n\n\t Name : "<<name;
				cout<<"\n\n\t Age : "<<age;
				cout<<"\n\n\t Match Played : "<<matchesplayed;	
			}	
			
			int calculateAvgRun (int totalRun)
			{
        		if (matchesplayed != 0) 
				{
            		return totalRun / matchesplayed;
        		}
				else 
				{
           		return 0;
        	}
    }
};

class Batsman : public Cricketer
		{
			int total_run;
			int avg_run;
			int best_perf;
		
		
		public :
			void get_data()
			{
				cout<<"\n\n\t Enter the total Run : ";
				cin>>total_run;
				 
				cout<<"\n\n\t Enter the Best perf. : ";
				cin>>best_perf;	
			} 
			
			void put_data()
			{
				cout<<"\n\n\t Total Run  : "<<total_run;
				
				int avg_run = calculateAvgRun(total_run); 
        		cout << "\n\n\t Average Run : " << avg_run;
        		
        
				cout<<"\n\n\t Best Perf.  : "<<best_perf;
			}

};

main()

{
	Batsman B;
	
	B.get_info();
	B.get_data();
	
	B.put_info();
	B.put_data();
}
