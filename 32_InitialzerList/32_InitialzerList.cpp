
#include <iostream>
using namespace std;

class Array {
    int* arr;
    int size;
public:
    Array()
    {
        arr = nullptr;
        size = 0;
    }
    Array(int size)
    {
        this->size = size;
        arr = new int[size] {};
    }
    Array(const initializer_list<int> &list)
    {
        this->size = list.size(); 
        arr = new int[size];
        int i = 0;
        for (int elem : list)
        {
            arr[i++] = elem;
        }

    }
    void Fill(const initializer_list<int>& list)
    {
        if (arr != nullptr)delete[]arr;
        this->size = list.size();
        arr = new int[size];
        int i = 0;
        for (int elem : list)
        {
            arr[i++] = elem;
        }
    }
    void Print()const
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Array()
    {
        delete[]arr;
    }
   
};

int main()
{
    Array arr(10);
    arr.Print();

    Array arr2({ 12, 14, 18, 45, 69, 47, 32,11,11,111,111,444,444,444 });
    Array arr3({ 12, 14, 18, 45, 69, 47, 3,47,47,47,4,8 });
    arr2.Print();
    arr3.Print();

    arr2.Fill({ 1, 2, 3 });
    arr2.Print();


    int static_arr[5] = { 1,2,3,4,5 };
    int* dynamic_arr = new int[5] {11, 12, 13, 14, 15};


    delete[]dynamic_arr;
    
}

