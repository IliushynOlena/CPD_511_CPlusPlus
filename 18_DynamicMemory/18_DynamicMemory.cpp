
#include <iostream>
#include<conio.h>

using namespace std;
void Test1()
{
	const int size = 50;
	int arr[size];
}
void Test2()
{
	int size = 5;
	int* arr = new int[size];
	delete []arr;
}

int* CreateArr(int size)
{
	int* arr = new int[size];
	return arr;
}
void FillArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<< arr[i]<< " ";
	}
	cout << endl;
}
int* AddNumber(int* arr, int *size, int number)
{
	
	(*size)++;//6
	int* temp = new int[*size];
	for (int i = 0; i < (*size)-1; i++)
	{
		temp[i] = arr[i];
	}
	temp[*size - 1] = number;
	delete[]arr;
	arr = temp;
	return arr;
}
int main()
{
	int size = 5;
	//cout << "Enter size : ";
	//cin >> size;
	int *arr = CreateArr(size);
	FillArr(arr, size);
	ShowArr(arr, size);

	int number;
	char choice = 'y';
	while (true)
	{
		cout << "Do you want add number ? y/n";
		choice = _getch();
		if (choice == 'n')break;

		cout << "Enter number : "; cin >> number;
		arr = AddNumber(arr, &size, number);
		system("cls");
		ShowArr(arr, size);

	}
	

	delete[]arr;
	/*
	//int a = 5;
	//int* pa = &a;

	int* pa = new int(3);
	int* pb = new int;
	//int* pc = NULL;
	int* pc = nullptr;

	cout << " pa " << pa << endl;
	cout << " pb " << pb << endl;
	cout << " pc " << pc << endl;

	*pb = 5;
	pc = new int(12);
	cout << " *pa " << *pa << endl;
	cout << " *pb " << *pb << endl;
	cout << " *pc " << *pc << endl;//error

	delete pc;
	pc = new int(122);
	cout << "================= All numbers ================" << endl;
	cout << " *pa " << *pa << endl;
	cout << " *pb " << *pb << endl;
	cout << " *pc " << *pc << endl;//error
	cout << *pa + *pb + *pc << endl;

	delete pa;
	delete pb;
	delete pc;
	//delete pc;

	*/



}

