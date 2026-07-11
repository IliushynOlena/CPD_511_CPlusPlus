#include <iostream>
#include <conio.h>
using namespace std;

class Queue
{
    int* data;
    int maxSize;
    int topIndex;
public:
    Queue() = default;
    Queue(int size)
    {
        this->maxSize = size;
        data = new int[maxSize];
        topIndex = 0;
    }
    ~Queue()
    {
        if (data != nullptr)
            delete[]data;
    }
    bool IsFull()const
    {
        return topIndex == maxSize;
    }
    bool IsEmpty()const
    {
        return topIndex == 0;
    }
    void Enqueue(int element)
    {
        if (!IsFull()) {
            data[topIndex++] = element;
        }
    }
    /*int Dequeue()
    {
        if (!IsEmpty()) {
            int first = data[0];
            for (int i = 0; i < topIndex; i++)
            {
                data[i] = data[i + 1];
            }
            topIndex--;
            return first;
        }
    }*/
    int Dequeue()
    {
        //cycles queue
        if (!IsEmpty()) {
            int first = data[0];
            for (int i = 0; i < topIndex; i++)
            {
                data[i] = data[i + 1];
            }
            data[topIndex - 1] = first;
            return first;
        }
    }
    int getSize()const
    {
        return topIndex;
    }
    void Clear()
    {
        topIndex = 0;
    }
    int Peek()
    {
        if (!IsEmpty())
            return data[0];

    }
    void Show()
    {
        cout << "===============================" << endl;
        for (int i = 0; i < topIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << "\n============================== = " << endl;
    }
   
};

int main()
{
    srand(time(0));
    int size;
    cin >> size;
    Queue q(25);
    for (int i = 0; i < 10; i++)
    {
        q.Enqueue(rand() % 50);
    }
    q.Show();
    cout << "Size queue: " << q.getSize() << endl;
    cout << "First element : " << q.Peek() << endl;
    while (!q.IsEmpty())
    {
       
        cout << "Element : " << q.Dequeue() << endl;
        _getch();
    }
    cout << "Size queue: " << q.getSize() << endl;
}

