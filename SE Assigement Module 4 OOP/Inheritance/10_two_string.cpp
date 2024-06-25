 //10.Write a program to concatenate the two stringsusing Operator Overloading
 
 #include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void accept_string()
                {
                        cout<<"\n\n\t Enter String :   ";
                        cin>>str;
                }
                void display_string()
                {
                        cout<<str;
                }
                String operator+(String x)  
                {
                        String s;
                        strcat(str,x.str);
                        strcpy(s.str,str);
                        return s;
                }
};
int main()
{
        String str1, str2, str3;

        str1.accept_string();
        str2.accept_string();

        cout<<"\n\n\t First String: ";
        str1.display_string();   

        cout<<"\n\n\t Second String : ";
        str2.display_string();

        str3=str1+str2;         
		cout<<"\n\n\t Concatenated String :";
        str3.display_string();

        
}
