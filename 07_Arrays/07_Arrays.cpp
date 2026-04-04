
#include <iostream>
using namespace std;

int main()
{
  /*  int mark1 = 5;
    int mark2 = 5;
    int mark3 = 5;
    int mark4 = 5;
    int mark5 = 5;*/

    ////Масив — це набір однотипних даних, об'єднаний загальним ім'ям.
   /* int train[3];
    train[0] = 5;
    train[1] = 10;
    train[2] = 3;

    cout << train[0] << endl;
    cout << train[1] << endl;
    cout << train[2] << endl;
    cout << train[5] << endl;
    cout << train[230] << endl;*/
   
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    const int size = 10;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    int arr1[size] = { 1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int arr2[size] = { 10,20,30,40 };
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int arr3[]= { 5,4,3,2,1 ,5,8,9,6,7,4,15,66 };
    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    //Другий спосіб — ініціалізація масиву за допомогою циклу.
    const int SIZE = 5;
    int arr4[SIZE]{};
    for (int i = 0; i < SIZE; i++)
    {
        //arr4[i] = i; 
        cout << arr4[i] << " ";
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin>> arr4[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr4[i] << " ";
    }

    //Написати програму, яка знаходить суму всіх від'ємних значень у масиві.
    //Написати програму, яка знаходить мінімальне й 
    // максимальне значення в масиві і виводить їх на екран.

    //int arr5[size] = { 5,-9,6,3,-7,-11,4,5,-2, 7 };
    int arr5[size] = { -5,-9,-6,-3,-7,-11,-4,-5,-2, -7 };
    int summa = 0;
    int max = arr5[0];
    int min = arr5[0];
    for (int i = 0; i < size; i++)
    {
        if (arr5[i] < 0)
            summa += arr5[i];
        if (arr5[i] > max)
            max = arr5[i];
        if (arr5[i] < min)
            min = arr5[i];

    }
    cout << "Summa = " << summa << endl;
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;






}

