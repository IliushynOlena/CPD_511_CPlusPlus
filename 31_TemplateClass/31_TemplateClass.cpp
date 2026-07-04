#include <iostream>
using namespace std;
/*
int GetMax(int* arr, int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
long GetMax(long* arr, int size)
{
    long max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
float GetMax(float* arr, int size)
{
    float max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
*/
template<typename T_arr>
T_arr GetMax(T_arr* arr, int size)
{
    T_arr max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


//template<typename T_coll, typename T_value>
template<class T_coll, class T_value>
class MyClass
{
    T_coll* collection;
    int size;
    T_value p;//default c-tor
public:
    MyClass()
    {
        collection = nullptr;
        size = 0;
        //point = 0;
    }
    MyClass(T_coll* coll, int size, T_value value) :collection(coll)
        ,size(size ),p(value) {}
    void setCollection(T_coll* coll);
    void setValue(T_value value);

    void Print()
    {
        cout << "\nCollection : " << collection << endl;
        for (int i = 0; i < size; i++)
        {
            cout << collection[i] << " ";
        }
        cout << endl;
        cout << "Value: " << p << endl;
    }
    ~MyClass()
    {
        if (collection != 0)
            delete[]collection;
    }
};

template<class T_coll, class T_value>
void MyClass<T_coll, T_value>::setCollection(T_coll* coll)
{
    collection = coll;
}

template<class T_coll, class T_value>
void MyClass<T_coll,T_value>::setValue(T_value value)
{
    p = value;
}

template<typename T_coord>
class Point {
private:
    T_coord x;
    T_coord y;
public:
    Point()
    {
        x = y = 0;
    }
    Point(T_coord x, T_coord y):x(x),y(y){}
    void Print()
    {
        cout << "X : " << x << ". Y : " << y << endl;
    }
    void setNewCoord(T_coord newX, T_coord newY)
    {
        this->x = newX;
        this->y = newY;
    }
  
};

template<typename T_X, typename T_Y>
class NewPoint {
private:
    T_X x;
    T_Y y;
public:
    NewPoint()
    {
        x = y = 0;
    }
    NewPoint(T_X x, T_Y y) :x(x), y(y) {}
    void Print()
    {
        cout << "X : " << x << ". Y : " << y << endl;
    }
    void setNewCoord(T_X newX, T_Y newY)
    {
        this->x = newX;
        this->y = newY;
    }

};
int main()
{
    Point<int> p1(4, 6);
    Point<float> p2(4.3, 6.6);
    Point<float> p3(4, 6.3);
    p1.Print();

    p1.setNewCoord(100.11, 200.22);
    p1.Print();
    p2.Print();
    p3.Print();
    NewPoint<int, float> p4(5, 1.14);
    p4.Print();
    /*
    long* long_arr = new long[5];
    char* char_arr = new char[5];
    for (int i = 0; i < 5; i++)
    {
        long_arr[i] = i + 1;
        char_arr[i] = i + 'a';
    }

    for (int i = 0; i < 5; i++)
    {
        cout << long_arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << char_arr[i] << " ";
    }

    MyClass<long,string> cl1(long_arr,5, "Class with long arr");
    MyClass<char,string> cl2(char_arr,5, "Class with char arr");

    cl1.Print();
    cl2.Print();
    */
    //delete[]long_arr;
    //delete[]char_arr;







    const int size = 10;

    //int numbers[size] = { 1,2,3,44,5,6,7,8,9,10 };
    //long numbers[size] = { 1,2,3,44,5,6,7,8,9,10 };
//    float numbers[size] = { 1.33,3.2,47.3,44,5.6,6,7,8,9,10 };
//    float max = GetMax(numbers, size);
//    cout << "Max = " << max << endl;
//
//    //string colors[5] = { "red","green","yellow","black", "white" };
//    string colors[5] = { "Andriy","Vova","Misha","Zinoviy", "Zina" };
//    cout << GetMax(colors, 5) << endl;
}

