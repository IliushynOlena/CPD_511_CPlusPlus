// 19_TwoDementionArrayDynamic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

void FillArray(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 90 +10;
        }
    }
}
void ShowArray(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<< setw(5)<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl<<"=================================================\n";
}
void Fill(int* arr, int col)
{
    for (int i = 0; i < col; i++)
    {
        arr[i] = rand() % 100;
    }
}
int** AddRow(int** arr, int &row, int col)
{
    int** temp = new int* [row + 1];//3 + 1
    for (int i = 0; i < row; i++)
    {
        temp[i] = arr[i];
    }
    delete[]arr;
    temp[row] = new int[col];
    Fill(temp[row], col);
    row++;
    return temp;
}
int ** AddRowByPosition(int** arr, int& row, int col, int pos)
{
    int** temp = new int* [row + 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    temp[pos] = new int[col];
    Fill(temp[pos], col);
    for (int i = pos+1; i < row+1; i++)
    {
        temp[i] = arr[i-1];
    }
    delete[]arr;
    row++;
    arr = temp;
    return arr;
}
int** AddCol(int** arr, int row, int& col)
{
    int** temp = new int* [row];
    for (int i = 0; i < row; i++)
    {
        temp[i] = new int[col + 1];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j] = arr[i][j];
        }
    } 
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[]arr;
    arr = temp;
    for (int i = 0; i < row; i++)
    {
        arr[i][col] = 5;
    }
    col++;
    return arr;
}
void DeleteRow(int** &arr, int& row)
{
    int** temp = new int* [row - 1];
    for (int i = 0; i < row-1; i++)
    {
        temp[i] = arr[i];
    }
    delete[]arr[row - 1];
    delete[]arr;
    arr = temp;
    row--;

}
int main()
{
    int row = 5;
    int col = 6;
   // cout << "Enter rows : "; cin >> row;
    //cout << "Enter cols : "; cin >> col;

    int** arr = new int* [row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    FillArray(arr, row, col);
    ShowArray(arr, row, col);
    arr = AddRow(arr, row, col);
    ShowArray(arr, row, col);
    arr = AddRow(arr, row, col);
    ShowArray(arr, row, col);
    arr = AddRow(arr, row, col);
    ShowArray(arr, row, col);
    cout << "=============== Add by position================" << endl;
    arr = AddRowByPosition(arr, row, col, 1);
    ShowArray(arr, row, col);

    cout << "=============== Add col ================" << endl;
    arr = AddCol(arr, row, col);
    ShowArray(arr, row, col);

    cout << "=============== Delete row ================" << endl;
    DeleteRow(arr, row);
    ShowArray(arr, row, col);
    cout << "=============== Delete row ================" << endl;
    DeleteRow(arr, row);
    ShowArray(arr, row, col);

    cout << "=============== Delete row ================" << endl;
    DeleteRow(arr, row);
    ShowArray(arr, row, col);



    for (int i = 0; i < row; i++)
    {
        delete[] arr[i] ;
    }
    delete[]arr;
}
