#include <iostream>
using namespace std;

//void ChangeVar(int* a)
//{
//	(*a)++;
//}
void ChangeVar(int& a)
{
	a++;
}
int& FindMax(int& a, int& b)
{
	if (a > b)return a;
	else return b;
}
int main()
{
	int a = 24;
	int b = 10;
	//pointer 
	int* pa = &a;
	int* pb;
	pb = &b;
	//link - посилання
	int& la = a;
	int& lb = b;


	cout << "a = " << a << endl;
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;
	cout << "la = " << la << endl;
	cout << "lb = " << lb << endl;
	cout << a + b << endl;
	cout << la + lb << endl;

	ChangeVar(a);
	cout << "a = " << a << endl;

	//int& max = FindMax(a, b);
	//cout << "Max = " << max << endl;
	cout << "a = " << a << endl;
	FindMax(a, b) = 1;
	cout << "a = " << a << endl;



}

