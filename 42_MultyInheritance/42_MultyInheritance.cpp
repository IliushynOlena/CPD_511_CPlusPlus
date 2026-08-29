
#include <iostream>
using namespace std;

class Car {
public:
	void Drive() {
		cout << "I can drive" << endl;
	}
	void Use() {
		cout << "I can drive" << endl;
	}
};
class Airplain {
public:
	void Fly()
	{
		cout << "I can fly" << endl;
	}
	void Use()
	{
		cout << "I can fly" << endl;
	}
};
class FlyCar:public Car, public Airplain
	
{

};

class A {
public:
	int value;
};
class B:public A{};
class C:public A{};
class D:public B, public C{};

int main()
{
	D d;
	d.value = 100;
	D::B value ;
	value.value = 100;
	D::C::value = 45;

	Car c;
	c.Drive();
	c.Use();
	Airplain a;
	a.Fly();
	a.Use();
	FlyCar fl;
	fl.Drive();
	fl.Fly();
	((Car)fl).Use();
	((Airplain)fl).Use();
  
}

