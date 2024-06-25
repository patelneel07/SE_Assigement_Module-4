//2. Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class Rectangle
{
protected:
    int len;

public:
    void length()
    {
        cout << "\n\n\t Length = ";
        cin >> len;
    }
};

class Rect : public Rectangle 
{
    int brh;

public:
    void breath()
    {
        cout << "\n\n\t Breath= ";
        cin >> brh;
    }

    void area_rect()
    {
        cout << "\n\n\t Area of Rect : " << len * brh;
    }
};

int main() 
{
    Rect R;

    R.length();
    R.breath();
    R.area_rect();


}

