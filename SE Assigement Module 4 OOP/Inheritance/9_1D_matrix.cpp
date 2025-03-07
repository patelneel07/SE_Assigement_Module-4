//9. Write a Program of Two 1D Matrix Addition using Operator Overloading 

#include<iostream>
using namespace std;

class Matrix
{
        int a[3][3];
    public:
        void accept();
        void display();
        void operator +(Matrix x);
};
void Matrix::accept()
{
        cout<<"\n\n\t  Enter Matrix Element (3 X 3) :\n ";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
}
void Matrix::display()
{
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<a[i][j]<<"\n\n\t";
                }
                cout<<"\n\n\t ";
        }
}
void Matrix::operator +(Matrix x)
{
        int mat[3][3];
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        mat[i][j]=a[i][j]+x.a[i][j];
                }
        }
        cout<<"\n Addition of Matrix :\n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
int main()
{
        Matrix m,n;
        m.accept();            
        n.accept();          
        cout<<"\n First Matrix : \n";
        m.display();           
        cout<<"\n Second Matrix : \n";
        n.display();         
        m+n;                  
        
}
