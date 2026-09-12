#include <iostream>
#include <fstream>
using namespace std;

class Stack
{
    enum { EMPTY = -1 };

    int* arr;
    int size;
    int topIndex;
public:
    Stack() = delete;

    Stack(int size) :size(size)//-100
    {
        if (size >= 0)
        {
            arr = new int[size];
            topIndex = EMPTY;
        }
        else
            throw invalid_argument("Size must be > 0");
        
    }

    ~Stack()
    {
        delete[] arr;
    }

    bool IsFull()
    {
        return topIndex == size - 1;
    }

    void Push(int value)
    {
        if (!IsFull())
            arr[++topIndex] = value;
        else
            throw exception("Stack is FULL!!!");
    }

    bool IsEmpty()
    {
        return topIndex == EMPTY;
    }

    int Pop()
    {
        if (!IsEmpty())
            return arr[topIndex--];
        else
            throw exception("Stack is EMPTY");
        return 0;
    }

    int Peek()
    {
        if (!IsEmpty())
            return arr[topIndex];
        else
            throw exception("Stack is EMPTY");
        return 0;
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
        cout << "Size : " << size << endl;
        cout << "Top index : " << topIndex << endl;
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << endl;
        }
        cout << endl;
    }

    void SaveToFile()const
    {
        ofstream out("Stack.txt", ios_base::out);
        if (!out.is_open())
        {
            cout << "Erro file not found" << endl;
            return;
        }
        out << size << endl;
        out << topIndex << endl;
        //11 45 7 8 9 23 15
        for (int i = 0; i <= topIndex; i++)
        {
            out << arr[i] << " ";
        }




        out.close();
        cout << "save info to file" << endl;
    }

    void LoadFromFile()
    {
        ifstream in("Stack.txt", ios_base::in);
        if (!in.is_open())
        {
            cout << "Erro file not found" << endl;
            return;
        }
        in >> size;
        in >> topIndex;
        arr = new int[size];//15
        for (int i = 0; i <= topIndex; i++)
        {
            in >> arr[i];
        }
        


        in.close();
        cout << "load info from file" << endl;
    }

    /*friend ostream& operator << (ostream& out, const Stack& st);
    friend istream& operator >> (istream& in, Stack& st);*/
};

//ostream& operator << (ostream& out, const Stack& st)
//{
//    out << st.size << endl;
//    out << st.topIndex << endl;
//    for (int i = 0; i <= st.topIndex; i++)
//    {
//        out << st.arr[i] << " ";
//    }
//    out << endl;
//    return out;
//}
//
//istream& operator >> (istream& in, Stack& st)
//{
//    delete[] st.arr;
//
//    in >> st.size;
//    in >> st.topIndex;
//
//    st.arr = new int[st.size];
//    for (int i = 0; i <= st.topIndex; i++)
//    {
//        in >> st.arr[i];
//    }
//    return in;
//}

int main()
{
  /*  Stack st(15);
    st.Push(100);
    st.Push(200);
    st.Push(300);
    st.Push(400);

    cout << endl;
    st.Print();

    st.SaveToFile();

    cout << endl;

    Stack st2(1);
    st2.LoadFromFile();
    st2.Print();

    while (!st2.IsEmpty())
    {
        cout << st2.Pop() << endl;
        st2.Print();
    }*/
    Stack read(0);
    read.Print();
    read.LoadFromFile();
    read.Print();

    return 0;
}