#include <iostream>
#include <iomanip>
using namespace std;

void Change(int one, int two)
{
	cout << "One = " << one << " Two = " << two << endl;
	int temp = one;
	one = two;
	two = temp;
	cout << "One = " << one << " Two = " << two << endl;
}
void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;//0.......99
	}
}
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int SummaArray(int arr[], int size)
{
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += arr[i];
	}
	//cout << "Summa = " << summa << endl;
	return summa;
}
void InitMatrix(int mass[][4], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mass[i][j] = rand() % 100;
		}
	}
}
void PrintMatrix(int mass[][4], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout<< setw(3)<< mass[i][j]<<" ";
		}
		cout << endl;
	}
	cout << endl;
}
int SummaMatrix(int mass[][4], int row, int col)
{
	int summa = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			summa += mass[i][j];
		}
	}
	return summa;
}

int A = 5;//global variable
int B ;//global variable B = 0;

void foo(int i, int j = 10) {
	cout << "i = " << i << " j = " << j << endl;
}
//void foo(int i,int y , int j = 10) ++++
//void foo(int i,int y , int j = 10, int k) error
void Star(int count = 20) {
	for (int i = 0; i < count; i++)
	{
		cout << "*";
	}
	cout << endl;
}

void SomeFunction()
{
	//Цей вид локальних змінних не знищується при виході за межі області видимості.
	// Такі змінні створюються один раз при першому зверненні і знищуються, 
	// коли програма закінчує своє виконання.Для створення локальної 
	// статичної змінної, необхідно використовувати ключове слово static.
	static int a = 0;
	a++;//increment
	cout << a << endl;
}
int main()
{
#pragma region Статична змінна
	SomeFunction();
	SomeFunction();
	SomeFunction();
	SomeFunction();
#pragma endregion


#pragma region Аргументи (параметри)  за замовчуванням

	foo(5, 7);
	foo(5);
	Star(5);
	Star(17);
	Star();

#pragma endregion

#pragma region Local vs Global Variable
	int A = 55;
	cout << A << endl;
	::A = 333;
	cout << ::A << endl;
	int b;

	int a = 5;
	if (a == 5) 
	{
		int b = 9;
	}
   cout << a << endl;
   //cout << b << endl;


#pragma endregion


	/*srand(time(0));
	const int size = 10;
	int arr[size]{};
	PrintArray(arr, size);
	InitArray(arr, size);
	PrintArray(arr, size);
	int sum = SummaArray(arr, size);
	cout << "Summa arr = " << sum << endl;

	const int row = 3;
	const int col = 4;
	int mass[row][col]{};
	PrintMatrix(mass, row, col);
	InitMatrix(mass, row, col);
	PrintMatrix(mass, row, col);
    sum = SummaMatrix(mass, row, col);
	cout << "Summa matrix = " << sum << endl;*/




	/*int a = 5, b = 10;
	cout << "a = " << a << " b = " << b << endl;
	Change(a, b);
	cout << "a = " << a << " b = " << b << endl;*/




}

