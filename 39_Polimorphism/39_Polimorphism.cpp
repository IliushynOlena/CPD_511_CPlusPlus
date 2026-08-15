

#include <iostream>
using namespace std;

class Car
{
private:
    string mark;
    string type_engine;
    float volume;
    int year;
protected:
    int speed;
public:
    Car():mark("no mark"),type_engine("none"), volume(0), year(0), speed(0){}
    Car(string m, string t, float v, int y):mark(m),type_engine(t), 
        volume(v), year(y), speed(0){}
    void Drive()const {
        cout << "I am a Car! I can drive with speed : " << speed << "km/h" << endl;
    }
    void Print()const
    {
        cout << "Mark " << mark << endl;
        cout << "Type engine " << type_engine << endl;
        cout << "Volume " << volume << endl;
        cout << "Year " << year << endl;
        cout << "Speed " << speed << endl;
    }
    void setSpeed(int newSpeed)
    {
        if (newSpeed > 0)
            speed = newSpeed;
        else
            speed = 0;
    }
};
class PoliceCar : public Car
{
    int soundVolume;
public:
    PoliceCar(): soundVolume(0), Car(){}
    PoliceCar(string m, string t, float v, int y, int s): soundVolume(s), Car(m,t,v,y){}
    void Drive()const {
        cout << "I am a Police Car! I can drive with speed : " << speed << "km/h" << endl;
    }
    void Print()const
    {
        Car::Print();
        cout << "Volume sound " << soundVolume << endl;
    }
    void BeepBeep()
    {
        cout << "Beep beep beep with sound volume " << soundVolume << "dB" << endl;
   }

};

int main()
{
    
    Car car("Ford focus", "V4", 1.6, 2000);
    PoliceCar police("Dodge Charger", "V6", 3.6, 2016, 500);
    car.setSpeed(120);
    car.Drive();
    car.Print();
    cout << endl;
    police.setSpeed(250);
    police.Drive();
    police.BeepBeep();
    police.Print();

    Car* cars[3] = {
        new Car("Ford focus", "V4", 1.6, 2000),
        new PoliceCar("Dodge Charger", "V6", 3.6, 2016, 500)
    };




}

