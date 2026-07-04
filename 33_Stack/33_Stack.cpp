#include <iostream>
using namespace std;

//class Stack
//{
//    enum {EMPTY = -1, FULL = 9};//10
//    int arr[FULL + 1];
//    int topIndex;
//public:
//    Stack()
//    {
//        topIndex = EMPTY;
//    }
//    bool IsFull()
//    {
//        return topIndex == FULL;
//    }
//    void Push(int value) {
//        if (!IsFull())
//            arr[++topIndex] = value;
//    }
//    bool IsEmpty()
//    {
//        return topIndex == EMPTY;
//    }
//    int Pop()
//    {
//        if (!IsEmpty())
//            return arr[topIndex--];
//
//    }
//    int getSize()
//    {
//        return topIndex + 1;
//    }
//    void Clear()
//    {
//        topIndex = EMPTY;
//    }
//    void Print()
//    {
//        for (int i = 0; i <= topIndex; i++)
//        {
//            cout << arr[i] << endl;
//        }cout << endl;
//    }
//};
//
class Stack
{
    enum { EMPTY = -1 };//10
  
    int* arr;
    int size;
    int topIndex;
public:
    Stack() = delete;
    //Stack() = default;
    Stack(int size):size(size)
    {
        arr = new int[size];
        topIndex = EMPTY;
    }
   
    bool IsFull()
    {
        return topIndex == size-1;
    }
    void Push(int value) {
        if (!IsFull())
            arr[++topIndex] = value;
    }
    bool IsEmpty()
    {
        return topIndex == EMPTY;
    }
    int Pop()
    {
        if (!IsEmpty())
            return arr[topIndex--];

    }
    int Peek()
    {
        if (!IsEmpty())
            return arr[topIndex];

    }
    int getSize()
    {
        return topIndex + 1;
    }
    void Clear()
    {
        topIndex = EMPTY;
    }
    void Print()
    {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << endl;
        }cout << endl;
    }
};


int main()
{
    Stack st(15);
    st.Push(100);
    st.Push(200);
    st.Push(300);
    st.Push(400);

    st.Print();

    while (!st.IsEmpty())
    {
        cout << "Element delete : " << st.Pop() << endl; 
        st.Print();
    }
    






}

