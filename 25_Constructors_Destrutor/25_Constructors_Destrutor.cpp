
#include <iostream>
using namespace std;
#include <windows.h>    
void gotoxy(int x, int y)
{
	COORD coordinate;
	coordinate.X = x;
	coordinate.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

class Student
{
private:
	string name;//Oleg
	string lastname;
	string surname;
	string birthdate;
	string phone;
	string city;
	string country;
	string university;
	string university_city;
	string university_country;
	string group;
	int* marks;
	int markCount;
	float average;
	void setAverage()
	{
		int sum = 0;
		for (int i = 0; i < markCount; i++)
		{
			sum += marks[i];
		}
		average = (float)sum / markCount;
	}
public:
	Student();//prototype of method
	Student(string name, string last, string surname)
	{
		cout << "Parametrized constructor" << endl;
		this->name = name;
		lastname = last;
		this->surname = surname;
		birthdate = "no birthdate";
		phone = "no phone";
		city = "no city";
		country = "no country";
		university = "no university";
		university_city = "no university city";
		university_country = "no university country";
		group = "no group";
		marks = nullptr;
		markCount = 0;
		average = 0;
	}
	Student(string name, string last, string surname, string birtdate)
	{
		cout << "Parametrized constructor" << endl;
		this->name = name;
		lastname = last;
		this->surname = surname;
		this->birthdate = birtdate;
		phone = "no phone";
		city = "no city";
		country = "no country";
		university = "no university";
		university_city = "no university city";
		university_country = "no university country";
		group = "no group";
		marks = nullptr;
		markCount = 0;
		average = 0;
	}
	void setName(string name)
	{
		this->name = name;//Oleg
	}
	void setLastName(string lastname)
	{
		this->lastname = lastname;
	}
	void setSurName(string surname)
	{
		this->surname = surname;
	}
	string getName()
	{
		return name;
	}
	string getLatName()
	{
		return lastname;
	}
	string getSurName()
	{
		return surname;
	}
	void Print();
	void Input()
	{
		cout << "Enter Name : "; cin>> name ;
		cout << "Enter Last Name : "; cin>> lastname ;
		cout << "Enter SurName : "; cin>> surname;
		cout << "Enter Birthdate : "; cin >> birthdate ;
		cout << "Enter Phone : "; cin >> phone;
		cout << "Enter City : ";cin >>city ;
		cout << "Enter Country : "; cin >> country ;
		cout << "Enter university : "; cin >> university ;
		cout << "Enter university city: ";cin >> university_city ;
		cout << "Enter university country : ";cin >> university_country ;
		cout << "Enter Group : ";cin>>  group ;
		marks = nullptr;
		markCount = 0;
		average = 0;
	}
	void Init()
	{
		name = "no name";
		lastname = "no lastname";
		surname = "no surname";
		birthdate = "no birthdate";
		phone = "no phone";
		city = "no city";
		country = "no country";
		university = "no university";
		university_city = "no university city";
		university_country = "no university country";
		group = "no group";
		marks = nullptr;
		markCount = 0;
		average = 0;
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
		setAverage();
	}
	~Student()
	{
		cout << "Destructor" << name << endl;
		if (marks != nullptr)
			delete[]marks;
	}

};
int main()
{
	Student st;
	//st.Init();
	//st.Print();
    //st.Input();
	/*st.AddMark(5);
	st.AddMark(7);
	st.AddMark(10);
	st.AddMark(4);
	st.Print();*/

	Student student("Oleg", "Ivanovich", "Oliynuk");
	student.AddMark(7);
	student.AddMark(10);
	gotoxy(5, 7);
	student.Print();

	if (true)
	{
		Student student2("Kateruna", "Muxailivna", "Petruk", "2000-12-5");
		student2.AddMark(7);
		student2.AddMark(10);
		student2.Print();
	}

}

Student::Student()
{
	cout << "Default constructor" << endl;
	name = "no name";
	lastname = "no lastname";
	surname = "no surname";
	birthdate = "no birthdate";
	phone = "no phone";
	city = "no city";
	country = "no country";
	university = "no university";
	university_city = "no university city";
	university_country = "no university country";
	group = "no group";
	marks = nullptr;
	markCount = 0;
	average = 0;
}

void Student::Print()
{
	cout << "Name : " << name << endl;
	cout << "Last Name : " << lastname << endl;
	cout << "SurName : " << surname << endl;
	cout << "Birthdate : " << birthdate << endl;
	cout << "Phone : " << phone << endl;
	cout << "City : " << city << endl;
	cout << "Country : " << country << endl;
	cout << "university : " << university << endl;
	cout << "university city: " << university_city << endl;
	cout << "university country : " << university_country << endl;
	cout << "Group : " << group << endl;
	cout << "Marks : ";
	for (int i = 0; i < markCount; i++)
	{
		cout << marks[i] << " ";
	}
	cout << "\nAverage mark : " << average << endl;
	cout << endl << "===================================================" << endl;
}
