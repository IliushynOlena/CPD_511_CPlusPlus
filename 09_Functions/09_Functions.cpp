#include <iostream>
using namespace std;

void Hello()
{
	cout << "Hello" << endl;
}

void Star(int count) {
	for (int i = 0; i < count; i++)
	{
		cout << "*";
	}
	cout << endl;
}
void AnyLine(char symbol, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << symbol;
	}
	cout << endl;
}

int Pow(int number, int step)
{
	int res = 1;
	for (int i = 0; i < step; i++)
	{
		res *= number;
	}
	//cout << "Res = " << res << endl;
	return res;
}
int Max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
	//тернарний оператор
	return (a > b) ? a : b;// ? :

}
int Min(int a, int b)
{
	return (a < b) ? a : b;
}
void Second()
{
	cout << "Second function some text" << endl;
}
void First()
{	
	cout << "First function some text" << endl;
	Second();
	cout << "First function some text" << endl;
}


int main()
{
	First();
	int res = Pow(5, 2);
	cout << "Res in main = " << res << endl;
	int max = Max(5, 7);
	cout << "Max = " << max << endl;
	int min = Min(3, -5);
	cout << "Min = " << min << endl;
	AnyLine('+' ,65);
	AnyLine('=',75 );
	Star(5);
	Star(10);
	Star(20);
   //Функція — спеціальна конструкція, за допомогою якої будь-який фрагмент коду, 
   // повторюваний у програмі два або більше разів, виноситься за тіло 
   // програми (у нашому випадку, за межі main).
	//cout << "Hello" << endl;

	//Є два способи оголошення функції : 
	// ■ Функція оголошується до функції main.
	// ■ Функція оголошується за допомогою прототипу
	Hello();
	Hello();
	Hello();
	Hello();
}
	

