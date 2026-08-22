

#include <iostream>
using namespace std;
//virtual - ovveride - polimorphism
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
    virtual void Drive()const {
        cout << "I am a Car! I can drive with speed : " << speed << "km/h" << endl;
    }
    virtual void Print()const
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
    void Drive()const override{
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
class SportCar : public Car
{
    int turbo_speed;
public:
    SportCar():turbo_speed(0),Car(){}
    SportCar(string m, string t, float v, int y, int turbo):turbo_speed(turbo),
        Car(m,t,v,y){}
    void Drive()const {
        cout << "I am a Sport Car! I can drive with speed : " << speed << "km/h" << endl;
    }
    void Print()const
    {
        Car::Print();
        cout << "Turbo speed " << turbo_speed << endl;
    }
    void Nitro()
    {
        cout << "Speed before turbo " << speed << " km/h" << endl;
        speed += turbo_speed;
        cout << "Speed after turbo " << speed << " km/h" << endl;
    }
};

void TestDrive(Car& car)
{
    car.setSpeed(70);
    car.Drive();
}
int main()
{
    SportCar sportCar("Toyota Supra A80","L6",3.0, 1999, 40);
    sportCar.setSpeed(250);
    sportCar.Drive();
    sportCar.Print();
    sportCar.Nitro();
    


    int marks[10];
    char marks1[10];
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
        new PoliceCar("Dodge Charger", "V6", 3.6, 2016, 500),
        new SportCar("Toyota Supra A80","L6",3.0, 1999, 40)
    };
    cout << "=================================" << endl;
    for (int i = 0; i < 3; i++)
    {
        cars[i]->Drive();
        cars[i]->Print();

        delete cars[i];
    }
    cout << "=================================" << endl;
    TestDrive(car);
    TestDrive(police);
    TestDrive(sportCar);


}

