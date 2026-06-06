
#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	int age;//15
	int* marks;//v0xc3v32xc
	int markCount;
public:
	Student()
	{
		cout << "Default constructor" << endl;
		name = "no name";
		age = 0;
		marks = nullptr;
		markCount = 0;
	}
	Student(string name, int age)
	{
		cout << "Parametrized constructor" << endl;
		this->name = name;
		this->age = age;
		marks = nullptr;
		markCount = 0;
	}
	Student(const Student &other)
	{
		this->name = other.name;//Oleg  --> Oleg
		this->age = other.age;  // 15 ---> 15
		this->markCount = other.markCount;
		//this->marks = other.marks;//v0xc3v32xc ---> v0xc3v32xc
		this->marks = new int[markCount];
		for (int i = 0; i < markCount; i++)
		{
			this->marks[i] = other.marks[i];
		}

	}
	void Print()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "Marks : ";
		for (int i = 0; i < markCount; i++)
		{
			cout << marks[i] << " ";
		}
		cout << endl << "===================================================" << endl;
	}
	

	void AddMark(int mark)
	{
		int* temp = new int[markCount + 1];
		for (int i = 0; i < markCount; i++)
		{
			temp[i] = marks[i];
		}
		temp[markCount] = mark;
		if (marks != nullptr)
			delete[]marks;
		marks = temp;
		markCount++;
	}
	~Student()
	{
		cout << "Destructor" << name << endl;
		if (marks != nullptr)
			delete[]marks;
	}

};
class Test
{
   ///default constrcutor
   ///destructor
   /// //copy constructor
};
int main()
{
	Test t;
	Student st;//default constructor
	

	Student student("Oleg",15);//parametrized ctor
	student.AddMark(7);
	student.AddMark(10);
	//student.Print();

	//if (true)
	//{
	//	Student student2("Kateruna", 17);//parametrized ctor
	//	student2.AddMark(12);
	//	student2.AddMark(10);
	//	student2.Print();
	//}

	Student copy = Student(student);

	cout << "=============== Original=============" << endl; 
	student.Print();
	cout << "=============== Copy=============" << endl; 
	copy.Print();

}

