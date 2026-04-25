
#include <iostream>
using namespace std;
/*
//перевантаження по типу даних
int max_element(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
long max_element(long arr[], int size)
{
	long max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
float max_element(float arr[], int size)
{
	float max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
*/
// Шаблони функцій
template<typename T>
T max_element(T arr[], int size)
{
	T max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
template<typename T1, typename T2>
T2 Max(T1 a, T2 b)
{
	/*if (a > b) return a;
	else return b;*/

	return (a > b) ? a : b;
}
// 
//перевантаження по кількості аргументів
double multy(double x)
{
	return x * x * x;
}
double multy(double x, double y)
{
	return x * y * x;
}
double multy(double x, double y, double z)
{
	return x * y * z;
}
//double multy(double x = 1, double y = 2, double z = 3, double k = 4)
//{
//	return x * y * z *k;
//}
int main()
{

	cout << "Max = " << Max(10.25, 3.33) << endl;
#pragma region  Перевантаження функцій
	/*cout << "Multy : " << multy(5) << endl;
	cout << "Multy : " << multy(5,8) << endl;
	cout << "Multy : " << multy(5,3,9) << endl;*/
	//cout << "Multy : " << multy(1,1,1,1) << endl;


	int x[] = { 10,20,30,40,50,60 };
	cout << "Max element : " << max_element(x, 6) << endl;
	long l[] = { 1l,2l,3l,4l,5l,6l };
	cout << "Max element : " << max_element(l, 6) << endl;
	float f[] = { 1.11,2.22,3.33,4.44,5.55, 7,77 };
	cout << "Max element : " << max_element(f, 6) << endl;
	string colors[] = { "red", "green", "blue", "pink", "cyan", "white"};
	//cout << "Max element : " << max_element(colors, 6) << endl;
#pragma endregion

}

