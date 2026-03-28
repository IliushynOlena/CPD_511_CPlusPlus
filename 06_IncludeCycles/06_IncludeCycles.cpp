
#include <iostream>
using namespace std;

int main()
{
    //1.......10

    //створити лічильника
    int i = 1;
    while (i <= 10)//лічильник треба використати в умові
    {
        cout << i << " ";
        i++;// i = i + 1 //лічильник треба змінювати
    }
    cout << endl;


    //1.......10
    int counter = 1;
    do
    {
        cout << counter << " ";
        counter++;

    } while (counter <= 10);

    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }





    //Помилка на етапі компіляції — помилка синтаксису мови програмування.
    //Помилка на етапі виконання 
    //F10 - start debuger
    //F9 - break pointer
    //F5 - quick start program and stop by break point
   /* int a = 0, b = 0;
    cout << "Enter a : "; cin >> a;
    cout << "Enter b : "; cin >> b;
    int res = a / b;
    cout << "Res = " << res << endl;

    for (int i = 0; i < 500; i++)
    {
        cout << i << " ";
    }*/
    /*
    int C = 10;
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (i >= j && i + j >= C - 1)
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;

    }
    //cout << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "|###|";
        }
        cout << endl;

    }
    //// 1 * 1 = 1
    //for (int i = 1; i <= 10; i++)
    //{
    //    for (int j = 1; j <= 10; j++)
    //    {
    //        cout << i << " * " << j << " = " << i * j << endl;
    //    }
    //    cout << endl;
    //}
    int N = 7;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                cout << "+ ";
            else
                cout << "= ";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j == N-1)
                cout << "+ ";
            else
                cout << "= ";
        }
        cout << endl;
    }
    
  */
   
}

