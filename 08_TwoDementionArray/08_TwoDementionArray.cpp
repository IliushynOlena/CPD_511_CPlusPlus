#include <iostream>
using namespace std;

int main()
{
    /*
    srand(time(NULL));
    int a = rand();//0...32767
    cout << a << endl;

    //0.....10

    //1.....100

    //23  ...0......22
    //100%23 = 4.. 4*23 = 92  100-92 = 8
    //32767%23= 1424  1424*23 = 32752  ---- 15
    //555% 23 = 24    24*23 = 552 ----3

    for (int i = 0; i < 20; i++)
    {
        //15%10 = 5
        // //12%10=2
        // 220%10 = 0
        //0...10
        /*a = rand()%10;
        cout << a << endl;*/

        // //0...100
        //a = rand() % 100;
        //cout << a << endl;

        // 0....x --> rand()%x
    //}
    //11...16  (y-x) + x 
    //for (int i = 0; i < 15; i++)
    //{
    //    //rand() % 5 ---> 0.....4
    //    a = rand() % 6 + 11;
    //    cout << a << endl;
    //}
    ////-20  -10
    //for (int i = 0; i < 15; i++)
    //{
    //    //rand() % 10 ---> 0......9
    //    a = rand() %10 - 20;
    //    cout << a << endl;
    //}
    srand(time(NULL));

   /* const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }*/
    int arr1[2][2] = { {1,1},{2,2}};
    int arr2[2][2] = { 1,2,3,4 };
    int arr3[3][3] = { {1,2},{3,4,5} };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }cout << endl;
    }


    const int row = 4;
    const int col = 5;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 90 +10; //0...89
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int max;
    for (int i = 0; i < row; i++)
    {
        max = arr[i][0];
        for (int j = 1; j < col; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
        cout << "Max element " << i << " row = " << max << endl;
    }


}

