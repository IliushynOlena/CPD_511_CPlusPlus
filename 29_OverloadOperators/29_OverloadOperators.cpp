
#include <iostream>
using namespace std;

class Point {
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

    bool operator < (const Point& other) const
    {
        return ((this->x + this->y) < (other.x + other.y));
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


};

int main()
{
    int a = 5, b = 7;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    Point p1(5,10);
    Point p2(3,2);

    //p1 + p2;
    Point res;
    cout << "Point 1: "; p1.Print();
    cout << "Point 2: "; p2.Print();
    res = p1.Plus(p2);
    cout << "Point res: "; res.Print();
    res = p1.Minus(p2);
    cout << "Point res: "; res.Print();

    res = p1 + p2;
    cout << "Point res: "; res.Print();
    res = p1 - p2;
    cout << "Point res: "; res.Print();
    res = p1 * p2;
    cout << "Point res: "; res.Print();
    res = p1 / p2;
    cout << "Point res: "; res.Print();
    res = p1 + 100;
    cout << "Point res: "; res.Print();

    p1 += p2;
    cout << "Point 1: "; p1.Print();
    cout << "Point 2: "; p2.Print();

    //res = -p1;
    cout << "Point res: "; res.Print();

    //res = p1 = p2;
    cout << "Point 1: "; p1.Print();
    cout << "Point 2: "; p2.Print();
    cout << "Point res: "; res.Print();

    if (p1 == p2)
    {
        cout << "Point is equals" << endl;
    }
    else
    {
        cout << "Point is not equals" << endl;
    }




}
