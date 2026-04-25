#include <iostream>
using namespace std;


void Foo(int a)
{
    if (a < 0)
        return;//break;
    cout << "Hello " << a << endl;
    a--;
    Foo(a);
}

int Summa(int arr[], int size, int i)
{
    if (i == size - 1)
        return arr[i];
    else
        return arr[i] + Summa(arr, size, i + 1);
}

int main()
{
    //Foo(10);
    const int size = 10;
    int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };
    int summa = 0;
    for (int i = 0; i < size; i++)
    {
        summa += arr[i];//10
    }
    cout << "Summa = " << summa << endl;

    summa = Summa(arr, size, 0);
    cout << "Summa = " << summa << endl;
}

