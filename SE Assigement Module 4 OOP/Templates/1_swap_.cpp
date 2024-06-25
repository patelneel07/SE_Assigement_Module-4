//1. Write a program of to swap the two values using template

#include<iostream>
using namespace std;
template<class s>

void swapping(s b,s a)
{
     s c;
     c=a;
     a=b;
     b=c;
     cout<<"\n\n\t After swapping";
     cout<<"\n\n\t a : "<< b << "\n\n\t b : "<<a;
}
int main()
{
     int i,n;
     cout<<"\n\n\t Enter numbers for swapping : ";
     cin>> i >> n ;
     cout<<"\n\n\t Befor swapping";
     cout<<"\n\n\t i : "<< i << " \n\n\t n : "<<n;
     swapping( i , n);
}
