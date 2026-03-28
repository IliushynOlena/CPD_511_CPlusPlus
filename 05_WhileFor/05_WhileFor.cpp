

#include <iostream>
using namespace std;

int main()
{
	/*Цикл — спеціальний оператор мови програмування,
		за допомогою якого ту чи іншу дію можна виконати
		потрібну кількість разів, залежно від якоїсь умови.

		Примітка: До речі, інша назва циклу — конструкція повторення.
		А кожне повторення дії — КРОК ЦИКЛУ або ІТЕРАЦІЯ.

		У мові С++ є кілька реалізацій такої форми, як цикл:
		■ Цикл з передумовою (while);
		■ Цикл з постумовою (do...while);
		■ Цикл з параметрами (for).*/
	

	int counter = 1;//1 - create counter
	while (counter <= 7)//2 - use counter in expresion
	{
		cout << "I have seen " << counter << " wonder of world" << endl;
		counter++;//3- add counter
	}
	cout << "Now, i can write essay!" << endl;

	/*  int start = 1;
	  int end = 10;
	  int i = start;
	  while (i <= end)
	  {
		  cout << i << " ";
		  i++;
	  }*/
	  /* int start = 11;
	   int end = 10;
	   while (start <= end)
	   {
		   cout << start << " ";
		   start++;
	   }
	   cout << endl;
	   start = 11;
	   do
	   {
		   cout << start << " ";
		   start++;
	   } while (start <= end);*/

	
	float a, b, res;
	char key;
	/*
	cout << "Choose the operation : " << endl;
	cout << "\t [+] - add numbers  " << endl;
	cout << "\t [-] - sub numbers  " << endl;
	cout << "\t [*] - multy numbers  " << endl;
	cout << "\t [/] - divide numbers  " << endl;
	cout << "\t [0] - exit  " << endl;
	cin >> key;
	while (key != '0')
	{
		cout << "Enter first number a : "; cin >> a;
		cout << "Enter first number b : "; cin >> b;		
		switch (key)
		{
		case '+':
			res = a + b;
			cout << a << " + " << b << " = " << res << endl;
			break;
		case '-':
			res = a - b;
			cout << a << " - " << b << " = " << res << endl;
			break;
		case '*':
			res = a * b;
			cout << a << " * " << b << " = " << res << endl;
			break;
		case '/':
			if (b == 0)
			{
				cout << "Study Math. Can't divide by zero!!!" << endl;
			}
			else
			{
				res = (float)a / b;
				cout << a << " / " << b << " = " << res << endl;
			}
			break;
		case '0':
			cout << "Goodbye" << endl;
			break;
		default:
			cout << "Incorrect choice" << endl;
			break;
		}
		cout << "Choose the operation : " << endl;
		cout << "\t [+] - add numbers  " << endl;
		cout << "\t [-] - sub numbers  " << endl;
		cout << "\t [*] - multy numbers  " << endl;
		cout << "\t [/] - divide numbers  " << endl;
		cout << "\t [0] - exit  " << endl;
		cin >> key;
	}
	*/
	/*
	do
	{
		cout << "Choose the operation : " << endl;
		cout << "\t [+] - add numbers  " << endl;
		cout << "\t [-] - sub numbers  " << endl;
		cout << "\t [*] - multy numbers  " << endl;
		cout << "\t [/] - divide numbers  " << endl;
		cout << "\t [0] - exit  " << endl;
		cin >> key; 
		
		switch (key)
		{
		case '+':
			cout << "Enter first number a : "; cin >> a;
			cout << "Enter first number b : "; cin >> b;
			res = a + b;
			cout << a << " + " << b << " = " << res << endl;
			break;
		case '-':
			cout << "Enter first number a : "; cin >> a;
			cout << "Enter first number b : "; cin >> b;
			res = a - b;
			cout << a << " - " << b << " = " << res << endl;
			break;
		case '*':
			cout << "Enter first number a : "; cin >> a;
			cout << "Enter first number b : "; cin >> b;
			res = a * b;
			cout << a << " * " << b << " = " << res << endl;
			break;
		case '/':
			cout << "Enter first number a : "; cin >> a;
			cout << "Enter first number b : "; cin >> b;
			if (b == 0)
			{
				cout << "Study Math. Can't divide by zero!!!" << endl;
			}
			else
			{
				res = (float)a / b;
				cout << a << " / " << b << " = " << res << endl;
			}
			break;
		case '0':
			cout << "Goodbye" << endl;
			break;
		default:
			cout << "Incorrect choice" << endl;
			break;
		}
	} while (key != '0');
	*/
	// for + TAB
	//Цикл з параметрами 
    //for (ініціалізація змінної; перевірка умови; зміна змінної)
	// {
	//  дія;
	// }   
	//1......10
/*
	int i = 10;
	while (i <= 20)
	{
		cout << i << " ";
		i++;
	}
	cout << endl;
	cout << "Example 1" << endl;
	///exapmle 1
	for (int i = 10; i <= 20; i++)
	{
		cout << i << " ";
	}
	cout << "\nExample 2" << endl;
	///exapmle 2
	int k;
	for ( k = 10; k <= 20; k+=2)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "Example 3" << endl;
	float c = 1;
	for (; c <= 2; c+=0.2)
	{
		cout << c << " ";
	}

	cout << "Example 4" << endl;
	
	for (int c = 1; c <= 5; )
	{
		cout << c << " ";
		c++;
	}
	cout << "Example 5" << endl;

	for (int c = 1; ; c++)
	{
		cout << c << " ";
		if (c == 1000)
			break;
		
	}
	*/
/*
	int magicNumber = 2;
	cout << "=============================================" << endl;
	cout << "       My magic number between 1 and 10" << endl;
	cout << "=============================================" << endl;
	int user = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter your number : ";
		cin >> user;
		if (user == magicNumber)
		{
			cout << "You are winner. Congratulation!" << endl;
			break;
		}
		else
		{
			cout << "That's not my number" << endl;
		}
		if (i == 5)
		{
			cout << "try again later" << endl;
		}

	}
	*/

	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
			cout << i << endl;

	}

	for (int i = 0; i < 20; i++)
	{
		if (i % 2 != 0)
			continue;
		cout << i << endl;

	}




}

