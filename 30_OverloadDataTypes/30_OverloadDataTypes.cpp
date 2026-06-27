// 30_OverloadDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Square;
class Rectangle {
private:
    int h;
    int w;
public:
    Rectangle():h(2),w(2){}
    Rectangle(int size):h(size),w(size){}
    Rectangle(int h, int w):h(h),w(w){}
    void Show()
    {
        cout << "Height : " << h << endl;
        cout << "Width : " << w << endl << endl;
    }
    operator int()
    {
        return h * w;
    }
    operator Square();
   
};

class Square
{
    int side;
public:
    Square(): side(2){}
    Square(int s): side(s){}
    void Show()
    {
        cout << "Height : " << side << endl;
        cout << "Width : " << side << endl<<endl;
    }
    operator int()
    {
        return side * side;
    }
    operator Rectangle()
    {
        return Rectangle(side, side + 10);

    }
};
Rectangle::operator Square()
{
    return Square(h + w);
}
int main()
{
    
    int valueInt = 9;// int ---> int

    double valDouble = valueInt;//з стандартного(int) типу до стандартного(double)
    //9.0000000000000000

    //з стандартного(double) типу до стандартного(int)
    int a = valDouble;//9.0000000000000000 --> 9 

    Rectangle r(10, 15);//з стандартного типу до абстрактного
    r.Show();

    Square sq(5);//з стандартного типу до абстрактного
    sq.Show();


    valueInt = r;//від абстактного до стандартного
    cout << "Recatngle to int : " << valueInt << endl;

    valueInt = sq;////від абстактного до стандартного
    cout << "Square to int : " << valueInt << endl;

    r = sq;//від абстактного до абстактного
    r.Show();

    sq = r;
    sq.Show();


}


