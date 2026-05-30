#include <iostream>
using namespace std;
/*
struct Player {
   
    string name;
    string groupname;
    short age;
    int number;
    int games;
    int goals;
};

void InitPlayer(Player &pl)
{
    cout << "Enter name : "; cin >> pl.name;
    cout << "Enter group name : "; cin >> pl.groupname;
    cout << "Enter age : "; cin >> pl.age;
    cout << "Enter number : "; cin >> pl.number;
    pl.games = 0;
    pl.goals = 0;
}

void Print(Player pl)
{
    cout << "Name : " << pl.name << endl;
    cout << "Name group : " << pl.groupname << endl;
    cout << "Age : " << pl.age << endl;
    cout << "Number : " << pl.number << endl;
    cout << "Games : " << pl.games << endl;
    cout << "Goals : " << pl.goals << endl;
}
void AddGame(Player &pl, int goals = 0)
{
    pl.games++;
    pl.goals += goals;

}
struct Player {

    string name;
    string groupname;
    short age;
    int number;
    int games;
    int goals;
};
*/
class Player
{
    //private
    string name;
    string groupname;
    short age;
    int number;
    int games;
    int goals;
public:
    void InitPlayer()
    {
        cout << "Enter name : "; cin >> name;
        cout << "Enter group name : "; cin >> groupname;
        cout << "Enter age : "; cin >> age;
        cout << "Enter number : "; cin >> number;
        games = 0;
        goals = 0;
    }
    void Print()
    {
        cout << "Name : " << name << endl;
        cout << "Name group : " << groupname << endl;
        cout << "Age : " << age << endl;
        cout << "Number : " << number << endl;
        cout << "Games : " << games << endl;
        cout << "Goals : " << goals << endl;
    }
    void AddGame( int g = 0)
    {
        games++;
        goals += g;

    }

};

class Student
{
private:
    // змінних-членів класу 
    string name;
    int marks[3];
public:
    // member function -->  функції-члени класу, елементи-функції, методи (класу).
    //функції-члени класу , методи
    double getAverage()
    {
        double summa = 0;
        for (int i = 0; i < 3; i++)
        {
            summa += marks[i];
        }
        return summa / 3;
    }

    // передбачаються відкриті функції-члени, 
    // призначені для встановлення значення (set) або 
    // отримання значення (get) закритих змінних-членів.
    //seeters and getters
    void setName(string name)
    {
        this->name = name;
    }
    void setMark(int mark, int index)
    {
        if (mark >= 1 && mark <= 12)
            marks[index] = mark;
        else
            marks[index] = 0;
    }
    //get
    string getName()
    {
        return name;
    }
    int getMark(int index)
    {
        return marks[index];
    }
};



int main()
{
    int a;
    Student st;
    st.setName("Oleksiy")  ;
    st.setMark(12, 0);
    st.setMark(11, 1);
    st.setMark(4, 2);
 
    cout << "Name : " << st.getName() << " \nMarks : " << st.getMark(0) << " " 
        << st.getMark(1) <<" " << st.getMark(2);
    cout << "\nAverage mark : " << st.getAverage() << endl;

    /*
    Player Nick;
    Nick.InitPlayer();
    Nick.Print();
    Nick.AddGame();
    Nick.Print();
    Nick.AddGame(3);
    Nick.Print();

    Nick.AddGame(4);
    Nick.Print();

    InitPlayer(Nick);
    Print(Nick);
    AddGame(Nick);
    Print(Nick);

    AddGame(Nick,2);
    Print(Nick);

    AddGame(Nick,4);
    Print(Nick);*/
}

