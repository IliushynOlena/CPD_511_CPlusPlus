
#include <iostream>
using namespace std;
class MyClass {

};
class Point 
{
private:
     int x;
     int y;
public:
    Point()
    {
        x = y = 0;
    }
    Point(int value)
    {
        x = y = value;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void Print()const
    {
        cout << " X : " << x << " . Y : " << y << endl;
    }
    Point Plus(const Point& other)const
    {
        Point res(this->x + other.x, this->y + other.y);
        return res;
    }
    Point Minus(const Point& other)const
    {
        Point res(this->x - other.x, this->y - other.y);
        return res;
    }

    //void operator[type] (){code}
    Point operator+(const Point& other)const
    {
        Point res(this->x + other.x, this->y + other.y);
        return res;
    }
    Point operator+(int value)const
    {
        Point res(this->x + value, this->y + value);
        return res;
    }
    Point operator -(const Point& other)const
    {
        Point res(this->x - other.x, this->y - other.y);
        return res;
    }
    Point operator *(const Point& other)const
    {
        Point res(this->x * other.x, this->y * other.y);
        return res;
    }
    Point operator /(const Point& other)const
    {
        Point res(this->x / other.x, this->y / other.y);
        return res;
    }
    Point operator += (const Point& other) 
    {
        this->x += other.x;
        this->y += other.y;
        return *this;
    }
    Point operator - () const {
       
        return Point(-x,-y);
    }
    Point operator = (const Point& other) {
        this->x = other.x;
        this->y = other.y;
        return *this;
    }


    bool operator > (const Point& other)const
    {
        return ((this->x + this->y) > (other.x + other.y));
    }
    bool operator <= (const Point& other)const
    {
        return ((this->x + this->y) <= (other.x + other.y));
    }
    bool operator >= (const Point& other)const
    {
        return ((this->x + this->y) >= (other.x + other.y));
    }

    bool operator == (const Point& other)const
    {
        return ((this->x ==other.x) && (this->y + other.y));
    }
    bool operator != (const Point& other)const
    {
        return !(*this == other);
    }

    Point operator --()//prefix form decrement
    {
        this->x--;
        this->y--;
        return *this;
    }

    Point operator ++(int a)//postfix form increment
    {
        this->x++;
        this->y++;
        return *this;
    }
    Point operator --(int)//postfix form decrement
    {
        this->x--;
        this->y--;
        return *this;
    }
    int getX()const { return x; }
    int getY() const{ return y; }
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }


    friend bool operator < (const Point& p1, const Point& p2);
    friend Point operator ++(Point& other);
    friend ostream& operator << (ostream& out, const Point& other);
    friend istream& operator >> (istream& in, Point& point);
};
bool operator < (const Point& p1, const Point& p2)
{
    return ((p1.x + p1.y) < (p2.x + p2.y));
}
Point operator ++(Point& other)//prefix form increment
{
    other.x++;
    other.y++;
    return other;
}

ostream& operator << (ostream& out, const Point& other) {
    out << "[  X : " << other.x << " Y : " << other.y << "]" << endl;
    return out;
}
istream& operator >> (istream& in, Point& point)
{
    in >> point.x;
    in >> point.y;
    return in;
}

//bool operator < (const Point& p1, const Point& p2) 
//{
//    return ((p1.getX() + p1.getY()) < (p2.getX() + p2.getY()));
//}
//Point operator ++(Point & other)//prefix form increment
//{
//    other.setX(other.getX()+1);
//    other.setY(other.getX()+1);
//    return other;
//}

class Square
{
    int h;
    int w;
};
void Hello()
{
    cout << "Hello" << endl;
}
void Hello1()
{
    cout << "Hello1" << endl;
}
void Hello2()
{
    cout << "Hello2" << endl;
}

int main()
{
    Point p1(5,10);
    Point p2(3,2);

    //ostream cout;
    //istream cin;

    int x = 100;
    cout << x << endl;
    cin >> p1;
    cin >> p2;
    cout << p1 << p2<<endl;

  
   Point res;
   cout << "Point 1: "; p1.Print();
   cout << "Point 2: "; p2.Print();

   ++p1;
   cout << "Point 1: "; p1.Print();
   --p1;
   cout << "Point 1: "; p1.Print();

   p1++;
   cout << "Point 1: "; p1.Print();
   p1--;
   cout << "Point 1: "; p1.Print();






    //Square s1;
    //Square s2;
    //Hello();
    //Hello1();
    //Hello2();
    //int a = 5, b = 7;
    //cout << a + b << endl;
    //cout << a - b << endl;
    //cout << a * b << endl;

    //a++;/// increment postfix  a = a + 1
    //++a;/// increment prefix

    //a--;//decrement postfix
    //--a;//decrement prefix

    //Point p1(5,10);
    //Point p2(3,2);

    ////p1 + p2;
    //Point res;
    //cout << "Point 1: "; p1.Print();
    //cout << "Point 2: "; p2.Print();
    ////res = p1.Plus(p2);
    //cout << "Point res: "; res.Print();
    //res = p1.Minus(p2);
    //cout << "Point res: "; res.Print();

    //res = p1 + p2;
    //cout << "Point res: "; res.Print();
    //res = p1 - p2;
    //cout << "Point res: "; res.Print();
    //res = p1 * p2;
    //cout << "Point res: "; res.Print();
    //res = p1 / p2;
    //cout << "Point res: "; res.Print();
    //res = p1 + 100;
    //cout << "Point res: "; res.Print();

    //p1 += p2;
    //cout << "Point 1: "; p1.Print();
    //cout << "Point 2: "; p2.Print();

    ////res = -p1;
    //cout << "Point res: "; res.Print();

    ////res = p1 = p2;
    //cout << "Point 1: "; p1.Print();
    //cout << "Point 2: "; p2.Print();
    //cout << "Point res: "; res.Print();

    //if (p1 == p2)
    //{
    //    cout << "Point is equals" << endl;
    //}
    //else
    //{
    //    cout << "Point is not equals" << endl;
    //}




}
