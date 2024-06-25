//2. Define a class to represent a bank account. Include the following members: 
#include<iostream>
using  namespace std;
class account
{
	private : 
			
			string Accounter_name;
			int acc_num,ass_value,dop_amu,wit_amu,dip_nb;
			string acc_type;
			int amu_balc;
			
	public :
			void get_account()
			{
				cout<<"\n\n\t Enter Name : ";
				cin>>Accounter_name;
				
				cout<<"\n\n\t Enter Account number : ";
				cin>>acc_num;
				cout<<"\n\n\t Enter type of account  : ";
				cin>>acc_type; 
				cout<<"\n\n\t Enter amount balance : ";
				cin>>amu_balc;
			}
	
			
			
			void print_account()
			{
				cout<<"\n\n\t Name :"<<Accounter_name;
				cout<<"\n\n\t Account number : "<<acc_num;
				cout<<"\n\n\t Type of Account : "<<acc_type;
				cout<<"\n\n\t Amount of balance :"<<amu_balc;
				
			}			
			void get_member()
			{
				cout<<"\n\n\t assign value : ";
				cin>>ass_value;
				cout<<"\n\n\t Deposited amount : ";
				cin>>dop_amu;
				cout<<"\n\n\t Withdraw amount : ";
				cin>>wit_amu;
				cout<<"\n\n\t Display name & balance : ";
				cin>>dip_nb;
				
			}
			void print_member()
			{
				cout<<"\n\n\t Assign value :"<<ass_value;
				cout<<"\n\n\t Deposited Account : "<<dop_amu;
				cout<<"\n\n\t Withdraw amount :"<<wit_amu;
				cout<<"\n\n\r Display name and balance : "<<dip_nb;
			}
				
};
			
			int main()
			{
				account E;
				
				E.get_account();
				E.print_account();
				E.get_member();
				E.print_member();
					
			}
