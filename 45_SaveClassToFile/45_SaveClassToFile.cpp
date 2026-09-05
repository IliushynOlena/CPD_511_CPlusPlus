
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Animal
{
    string name;
    string place;
    float weight;
public:
    Animal() :name("no name"), place("no place"), weight(0) {}
    Animal(string n, string p, float w) :name(n), place(p), weight(w) {}

    void ShowInfo()const {
        cout << "Name : " << name << endl;
        cout << "Place : " << place << endl;
        cout << "Weight : " << weight << "kg" << endl;
    }
  
    virtual void Move()const {
        cout << "I am moving......" << endl;
    }
    friend ofstream& operator << (ofstream& out, const Animal& animal);
    friend ifstream& operator >> (ifstream& in, Animal& animal);
};
ofstream& operator << (ofstream& out, const Animal& animal)
{
    out << animal.name << " " << animal.place << " " << animal.weight;
    return out;
}
ifstream& operator >> (ifstream& in, Animal& animal)
{
    in >> animal.name >> animal.place >> animal.weight;
    return in;
}

class Zoo
{
    string name;
    Animal * animals;
    int countAnimal;
public:
    Zoo(string name):name(name),animals(nullptr), countAnimal(0){}
   
    void AddAnimal(Animal animal)
    {
        Animal* temp = new Animal[countAnimal + 1];
        for (int i = 0; i < countAnimal; i++)
        {
            temp[i] = animals[i];
        }
        temp[countAnimal] = animal;
        countAnimal++;
        if (animals != nullptr)
            delete[]animals;
        animals = temp;
    }
    ~Zoo()
    {
        if (animals != nullptr)
            delete[]animals;
    }
    void ShowZoo()
    {
        cout << "============ Name " << name << " =================" << endl;
        for (int i = 0; i < countAnimal; i++)
        {
            animals[i].ShowInfo();
            cout << "___________________________" << endl;
        }
    }
    void SaveToFile()const
    {
        ofstream out("Zoo.txt", ios_base::out);
        out << name << endl;
        out << countAnimal << endl;
        for (int i = 0; i < countAnimal; i++)
        {
            out << animals[i] << endl;
        }
        out.close();
        cout << "Save info to file!!!!" << endl;

    }
    void LoadFromFile()
    {
        ifstream in("Zoo.txt", ios_base::in);
        getline(in ,name);//in >> name;
        in >> countAnimal;
        animals = new Animal[countAnimal];
        for (int i = 0; i < countAnimal; i++)
        {
            in >> animals[i];
        }
        in.close();

    }
};

int main()
{
    /*Animal cat("Tom", "Flat", 3.5);
    cat.ShowInfo();
    Zoo zoo("Rivne Zoo");
    zoo.AddAnimal(cat);
    zoo.AddAnimal(Animal("Elephant", "Africa", 5000));
    zoo.AddAnimal(Animal("Monkey", "Africa", 35));
    zoo.AddAnimal(Animal("Wolf", "Wood", 30));

    zoo.ShowZoo();
    zoo.SaveToFile();*/

    Zoo zoo("No name");
    zoo.ShowZoo();
    zoo.LoadFromFile();
    zoo.ShowZoo();
}

