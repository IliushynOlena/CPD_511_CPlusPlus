#include <iostream>
using namespace std;

class EventDay {
public:
	int day;
	int month;
	int year;

	void setDate(int day) {
		this->day = day;
	}
	int getDay()
	{
		return day;
	}
	int getDay()const
	{
		return day;
	}
};

class Account {
private:
	double summ;
	const double rate;
public:
	Account(double summ, double rate) : rate(rate)
	{
		this->summ = summ;
	}
	double getRate()  const
	{
		return rate;
	}
	double getIncome()
	{
		return summ * rate / 100;
	}
	double getIncome()  const
	{
		return summ * rate / 100;
	}
	double getSum() 
	{ 
		return summ; 
	}
	double getSum()const
	{
		return summ;
	}
	double setSum()
	{
		summ += getIncome();
		return summ;
	}

};

void doSomething(long number)
{ }
float doSomething() { return 10.0; }// double -> float  implicit

class Array {
	int* arr;
	int size;
public:
	explicit Array(int size = 10) 
	{
		this->size = size;
		arr = new int[size];
	}
	~Array()
	{
		delete[]arr;
	}
	int getSize() const
	{
		return size;
	}
	int getValue(int index)
	{
		return arr[index];
	}
	void setValue(int value, int index)
	{
		arr[index] = value;
	}
	void display(int index) const {
		cout << arr[index] << " ";
	}
};

void ShowAllArray(const Array &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		arr.display(i);
	}
	cout << endl;
}
int main()
{
	srand(time(0));

	Array arr(15);
	for (int i = 0; i < arr.getSize(); i++)
	{
		arr.setValue(rand()%15, i);
	}

	ShowAllArray(arr);
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	ShowAllArray(5);


	Array copy = 10;
	ShowAllArray(copy);

	//Explicit

	//double a = 10; // int ---> double 10.0000000000000000  - implicit


	//doSomething("Hello world");// int >> long implicit



	//Account account1( 2000,5);    
	//const Account account2( 5000,8);    

	//cout<< account1.getRate()<< endl;    
	//cout<< account2.getRate() << endl;

	//cout<< account1.getSum() << endl;
	//cout<< account2.getSum() << endl;
	//
	//cout<< account1.getIncome() << endl;
	//cout<< account2.getIncome() << endl;

	//cout<< account1.setSum() << endl;
	//cout<< account2.setSum() << endl;

	//int a = 5;
	//const int PI = 3.14;

	//const int size = 10;
	//const string s = { "first day" };

	//const int days[] = { 31,28,31 };
	//EventDay event = { 29,05,2026 };
	//cout << event.day << " " << event.month << endl;

	////event.setDate(11);
	//cout << event.getDay() << endl;
	//cout << event.day << " " << event.month << endl;

	////константні об'єкти
	//const EventDay independency = { 24,8,2026 };
	//cout << independency.getDay() << endl;
	//cout << independency.day << " " << independency.month << endl;
	////independency.setDate(15);
 ///*   independency.day = 11;
	//independency.month = 11;*/
	//cout << independency.day << " " << independency.month << endl;

}
