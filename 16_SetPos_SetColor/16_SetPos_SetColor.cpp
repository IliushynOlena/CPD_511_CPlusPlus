
#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


int main()
{
	float x = -5, y = 2.7, z = 3.14;
	cout <<  setw(10)<< x<< endl;
	cout << setw(10)<< y << endl;
	cout << setw(10) << z << endl;

	//for (int i = 0; i <= 255; i++)
	//{
	//	cout << "code = " << i << " symbol = [ " << (char)i << "]" << endl;
	//}
	srand(time(0));
	for (int i = 0; i < 15; i++)
	{
		SetColor(i);
		cout << "Hello world" << endl;
	}

	SetColor(7);

	/*for (int i = 0; i < 100; i++)
	{
		SetPos(rand() % 50, rand() % 20);
		SetColor(rand() % 15);
		cout << "*";
		Sleep(100);
	}*/

	for (int i = 0; i < 255; i++)
	{
		cout <<(char) i << endl;
	}

	cout << (char)219 << endl;



}

