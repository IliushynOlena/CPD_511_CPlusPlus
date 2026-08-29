
#include <iostream>
using namespace std;

class Animal//abstract class
{
    string name;
    string place;
    float weight;
public:
    Animal():name("no name"), place("no place"), weight(0){}
    Animal(string n, string p, float w):name(n), place(p), weight(w){}
    
    void ShowInfo()const {
        cout << "Name : " << name << endl;
        cout << "Place : " << place << endl;
        cout << "Weight : " << weight << "kg" << endl;
    }
    //pure virtual method
    virtual void MakeSound()const = 0;

    virtual void Move()const {
        cout << "I am moving......" << endl;
    }
    ~Animal()
    {

    }
};
class Lion : public Animal
{
    float runSpeed;
public:
    Lion():runSpeed(0),Animal(){}
    Lion(string n, string p, float w, float r):runSpeed(r),Animal(n,p,w){}
    void Move()const override {
        cout << "I am running with speed ..."<< runSpeed << "km/h" << endl;
    }
    void MakeSound()const override {
        cout << "Rrrrrrrrrrrrr-rrrrrrrrrrrr-rrrrrrrrrrr" << endl;
    }
    ~Lion() {

   }

};

class Duck: public Animal
{
    float flyHeight;
public:
    Duck():flyHeight(0),Animal(){}
    Duck(string n, string p, float w, float fl):flyHeight(fl),Animal(n,p,w){}
    void Move()const {
        cout << "I am flying on up.." << flyHeight << "km/h" << endl;
    }
    void MakeSound()const override {
        cout << "Kra-kra-kra-kra" << endl;
    }

};

class Reptile: public Animal
{
    float swimDeep;
public:
    Reptile():swimDeep(0),Animal(){}
    Reptile(string n, string p, float w, float d):swimDeep(d),Animal(n,p,w){}
    void Move()const {
        cout << "I am  crowling and swimming up to " << swimDeep << "m" << endl;
    }

};
class Frog: public Reptile
{
public:
    Frog():Reptile(){}
    Frog(string n, string p, float w, float d):Reptile(n,p,w,d){}
    void MakeSound()const override {
        cout << "Kva-kva-kva-kva" << endl;
    }
  
};

void RollCall(Animal& a)
{
    a.MakeSound();
    a.Move();
}
int main()
{

  /*  Animal animal("Cat Tom","Flat", 4.5);
    animal.Move();
    animal.ShowInfo();
    animal.MakeSound();*/

    Frog f("Mimi", "Lake", 0.3, 1);
    Duck duck("Donal Dack","England", 1.5, 2);
    duck.Move();
    duck.MakeSound();
    duck.ShowInfo();
    cout << "________________________" << endl;

    Lion lion("Simba","Africa",150,70);
    lion.MakeSound();
    lion.Move();
    lion.ShowInfo();

    cout << "+++++++++++++++++++++++++++++++" << endl;
    RollCall(lion);
    RollCall(duck);
    RollCall(f);


    Animal* zoo[3] = {
        new Frog("Mimi", "Lake", 0.3, 1),
        new  Duck("Donal Dack","England", 1.5, 2),
        new Lion("Simba","Africa",150,70)
    };

    for (int i = 0; i < 3; i++)
    {
        zoo[i]->MakeSound();
        delete zoo[i];
    }
}

