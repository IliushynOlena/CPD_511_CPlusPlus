
#include <iostream>
using namespace std;

class Person//abstract class (can't create)
{
    string name;
   
public:
    Person() :name("no name") {}
    Person(string name) :name(name)
    {
      
    }
    virtual void Print() const {
        cout << "Name : " << name << endl;      

    }
    virtual ~Person() = 0 {};//pure virtual destructor


};

class Aspirant : public Person
{
    string* subjects;
    int countSubjects;
public:
    Aspirant() :subjects(nullptr), countSubjects(0), Person() {}
    Aspirant(string name, initializer_list<string> sub) :Person(name)
    {
        countSubjects = sub.size();
        subjects = new string[countSubjects];
        int i = 0;
        for (string s : sub)
        {
            subjects[i] = s;
            i++;
        }
    }
    void Print()const {
        Person::Print();
        cout << "Subjects : " << endl;
        for (int i = 0; i < countSubjects; i++)
        {
            cout << " - " << subjects[i] << endl;
        }
        cout << endl;
    }
    ~Aspirant() {
        if (subjects != nullptr)
            delete[]subjects;
    }



};

int main()
{
    srand(time(0));
   /* Person student("Vasia");
    student.Print();*/


    Aspirant aspitant("Ivan",  { "MAin page" ,"Trends in UI", "User Experience" });
    aspitant.Print();

    Person* group[2]{
       // new Person("Vasia"),
        new Aspirant("Ivan", { "MAin page" ,"Trends in UI", "User Experience"}),
        new Aspirant("Olga", { "Recuperation" ,"Water"})
    };

    for (int i = 0; i < 2; i++)
    {
        group[i]->Print();
        delete group[i];
    }



}
