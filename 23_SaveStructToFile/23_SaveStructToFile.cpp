
#include <iostream>
#include <fstream>
using namespace std;

const char* FILENAME = "D://MyHumans.txt";

struct Human {
    int id;
    char name[250];
    char surname[250];
    char position[250];
    int salary;
    int year_bithdate;

    void Show()
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Surname : " << surname << endl;
        cout << "Position : " << position << endl;
        cout << "Salary : " <<salary << endl;
        cout << "Birthdate : " << year_bithdate << endl;
    }
    void FillFromKeyboard()
    {
        cout << "Enter Id : "; cin >> id;
        cout << "Enter Name : "; cin >> name;
        cout << "Enter Surname : "; cin >>surname;
        cout << "Enter Position : "; cin >> position;
        cout << "Enter Salary : "; cin >> salary;
        cout << "Enter Birthdate : "; cin >> year_bithdate;
    }
    void Copy(Human h)
    {
        id = h.id;
        strcpy_s(name, sizeof(h.name), h.name);
        strcpy_s(surname, sizeof(h.surname), h.surname);
        strcpy_s(position, sizeof(h.position), h.position);
        salary = h.salary;
        year_bithdate = h.year_bithdate;
    }
    void SaveToFile()
    {
        ofstream out(FILENAME, ios_base::app);
        out << id;
        out << ":";
        out << name;
        out << ":";
        out << surname;
        out << ":";
        out << position;
        out << ":";
        out << salary;
        out << ":";
        out << year_bithdate;
        out << "|";
        out.close();
    }
    void FillFromFile(int i, char *n, char* s, char* pos, int sal, int y)
    {
        id = i;
        strcpy_s(name, sizeof(n), n);
        strcpy_s(surname, sizeof(s), s);
        strcpy_s(position, sizeof(pos), pos);
        salary = sal;
        year_bithdate = y;
    }
};

void AddHuman(Human*& h, int &size)
{
    size++;
    Human* temp = new Human[size];
    for (int i = 0; i < size-1; i++)
    {
        temp[i].Copy(h[i]);
    }
    temp[size - 1].FillFromKeyboard();
    delete[]h;
    h = temp;
    h[size - 1].SaveToFile();
}
void ShowAll(Human *h, int size)
{
    for (int i = 0; i < size; i++)
    {
        h[i].Show();
    }
}
void ReadFromFile(Human*& h, int& size)
{
    ifstream in(FILENAME);

    int i, s, y;
    char id[20], name[250], surname[250], position[250], salary[50], year[50];
    while (!in.eof())
    {
        in.getline(id, 250, ':');
        if (in.eof())break;
        in.getline(name, 250, ':');
        in.getline(surname, 250, ':');
        in.getline(position, 250, ':');
        in.getline(salary, 250, ':');
        in.getline(year, 250, ':');
        
        i = atoi(id);
        s = atoi(salary);
        y = atoi(year);
        Human read;
        read.FillFromFile(i, name, surname, position, s, y);
        size++;
        Human* temp = new Human[size];
        for (int i = 0; i < size - 1; i++)
        {
            temp[i].Copy(h[i]);
        }
        temp[size - 1] = read;
        delete[]h;
        h = temp;

    }

}
int main()
{
    Human Oleg = {};
    //Oleg.FillFromKeyboard();
    //Oleg.Show();

    int size = 0;//1
    Human* humans = new Human[size];//0
    ReadFromFile(humans, size);
    //AddHuman(humans, size);
    //AddHuman(humans, size);
    ////AddHuman(humans, size);

    ShowAll(humans, size);


    delete[]humans;
    
    
}

