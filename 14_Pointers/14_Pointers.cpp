#include <iostream>
using namespace std;

void ChangeVar(int a)
{
	a++;
}

void ChangeVar(int *a)
{
	(*a)++;
}
int FindMax(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	if (b > c && b > a)
		return b;
	return c;
}
int* FindMax(int *a, int *b, int *c)
{
	if (*a > *b && *a > *c)
		return a;
	if (*b > *c && *b > *a)
		return b;
	return c;
}
void InitArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 100;
		//arr[i] = rand() % 100;
	}
}
void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<< *(arr + i)<< " ";
	}
}
int* FindMaxInArray(int* arr, int size)
{
	int* max = arr;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > *max)
			max = arr + i;
	}
	return max;
}
int main()
{
	const int size = 10;
	int arr[size];
	InitArray(arr, size);
	PrintArray(arr, size);
	int *max = FindMaxInArray(arr, size);
	cout << "Max element : " << *max << endl;
	*max *= 2;
	PrintArray(arr, size);

	/*
   
	int a = 20, b = 4, c = 77;
	cout << "a = " << a << endl;
	ChangeVar(a);
	cout << "a = " << a << endl;
	ChangeVar(&a);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	int max = FindMax(a, b, c);
	max++;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "max = " << max << endl;
	cout << "-----------------------" << endl;
	int* maxEl = FindMax(&a, &b, &c);
	*maxEl *= 2;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "*max = " <<*maxEl << endl;
	*/






	
	//pointers - вказівник (комірочка, яка може зберігати адресу )
	/*
	* int a = 5;
	int b = 7;
	int* pa = &a;
	int* pb = &b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "pa " << pa << endl;
	cout << "pb " << pb << endl;
	cout << "*pa " << *pa << endl;
	cout << "*pb " << *pb << endl;

	cout << "a + b = " << a + b << endl;
	cout << "*pa + *pb = " << *pa + *pb << endl;

	pa = &b;
	cout << "b = " << b << endl;
	cout << "*pa " << *pa << endl;
	cout << "*pb " << *pb << endl;

	*pa *= 2;
	cout << "b = " << b << endl;
	cout << "*pa " << *pa << endl;
	cout << "*pb " << *pb << endl;
	*/
	/*
	srand(time(0));
	const int size = 10;
	int arr[size];
	int* parr = &arr[0];

	cout << parr << endl;
	cout << arr << endl;

	for (int i = 0; i < size; i++)
	{
		*parr = rand() % 100; 
		parr++;
	}
	parr = arr;

	for (int i = 0; i < size; i++)
	{
		cout<< *parr<< " ";
		parr++;
	}

	int* newPtr = arr;
	*newPtr = 0;

	newPtr += 3;
	*newPtr = 0;

	cout << endl;
	parr = arr;

	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr++;
	}
	parr--;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr--;
	}
	*/
	//for (int i = 0; i < size; i++)
	//{
	//	//arr[i] = rand() % 100;
	//	*(parr + i) = rand() % 100;
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	//cout<< arr[i]<< " ";
	//	cout << *(parr + i) << " ";
	//}
	//cout << endl;
	//arr[0] = 10;
	//arr[1] = 5;
	//cout << arr[0] << endl;
	//cout << parr << endl;
	//cout << *parr << endl;
	//cout << *parr+1 << endl;
	//cout << *(parr+1) << endl;


}
