
#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

inline void Hello()
{
	cout << "Hello world" << endl;
}

class Human {
private:
	string name;
	int age;
	int weight;
	static int count_human;
public:
	int static getCount()
	{
		return count_human;
	}
	Human() :name("no name"), age(0), weight(0) { count_human++; }
	//Human() :name{ "no name" }, age{ 0 }, weight{ 0 } {}

	/*Human()
	{
		cout << "Deafult constructor" << endl;
		name = "no name";
		age = 0;
		weight = 0;
	}*/
	Human(string name): Human()
	{

		this->name= name;
		///age = 0;
		//weight = 0;
	}
	Human(string name, int age):Human(name)
	{
		//this->name = name;
		this->age = age;
		//weight = 0;
	}
	Human(string name, int age, int weight):Human(name, age)
	{
		//this->name = name;
		//this->age = age;
		this->weight = weight;
	}
	void Print()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "Weight : " << weight << endl<<endl;
	}
};

int Human::count_human = 0;
int main()
{
	cout << "Count human : " << Human::getCount() << endl;
	Human h;//Deafult constructor
	h.Print();
	cout << "Count human : " << h.getCount() << endl;
	cout << "Count human : " << Human::getCount() << endl;

	Human h2("Oleg");
	h2.Print();
	cout << "Count human : " << h2.getCount() << endl;
	cout << "Count human : " << Human::getCount() << endl;

	Human h3("Mukola", 15);
	h3.Print();
	cout << "Count human : " << h3.getCount() << endl;
	cout << "Count human : " << Human::getCount() << endl;



	Human h5("Petro", 25, 150);
	h5.Print();
	cout << "Count human : " << h5.getCount() << endl;
	cout << "Count human : " << Human::getCount() << endl;

	

	//Hello();
	//int a;
	//int b = 10;
	//int c = 3.33;
	////cout << a << " " << b << " " << c << endl;
	//cout << b << " " << c << endl;

	//int numbers[2];
	//cout << numbers[0] << endl;
	//numbers[0] += 2;
	//cout << numbers[0] << endl;

	//int number = 5;//ініціалізація з копіюванням
	//int value(42);//пряма ініціалізація
	//int size{ 25 };//уніфікована ініціалізація

	//float pi = { 3.14 };
	//cout << pi << endl;

	//int answer{ 45 };
	//const float goodTempt{ 36.6 };
	//int grades[4]{ 11,12,10,8 };
	//int matrix[2][2]{ 1,2,3,4 };
	//int* ptr{ nullptr };

	//Point p{ 88,77 };






}

