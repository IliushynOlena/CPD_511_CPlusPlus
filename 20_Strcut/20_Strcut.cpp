
#include <iostream>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
    char month_name[10];
};

struct person
{
    int id;
    char name[20];
    char lastname[20];
    char email[20];
    int salary;
    char position[20];
    date hiredate;

};
void InputData(person &Nick)
{
    cout << "Ente id : "; cin >> Nick.id;
    cout << "Ente name : "; cin >> Nick.name;
    cout << "Ente lastname : "; cin >> Nick.lastname;
    cout << "Ente email : "; cin >> Nick.email;
    cout << "Ente salary : "; cin >> Nick.salary;
    cout << "Ente position : "; cin >> Nick.position;
    cout << "Ente hiredate day : "; cin >> Nick.hiredate.day;
    cout << "Ente hiredate month : "; cin >> Nick.hiredate.month;
    cout << "Ente hiredate year : "; cin >> Nick.hiredate.year;
    cout << "Ente hiredate month_name : "; cin >> Nick.hiredate.month_name;
}
void ShowInfo(person Nick)
{
    cout << "Id : " << Nick.id << endl;
    cout << "Name : " << Nick.name << endl;
    cout << "Lastname : " << Nick.lastname << endl;
    cout << "Email : " << Nick.email << endl;
    cout << "Salary : " << Nick.salary << endl;
    cout << "Position : " << Nick.position << endl;
    cout << "Hiredate : " << Nick.hiredate.day << "." << Nick.hiredate.month <<
        "." << Nick.hiredate.month;
        ;

}
int main()
{
    person Nick = {};
    InputData(Nick);
    ShowInfo(Nick);





    int a = 5;

    date birthdate = {11,5,2000,"May"};


    cout << "------------- Birthdate ----------------\n";
    cout << "Day : "<< birthdate.day << endl;
    cout <<"Month :"<< birthdate.month << endl;
    cout <<"Year : "<< birthdate.year << endl;
    cout <<"Month name"<< birthdate.month_name << endl;


    date friendBirthdate;
    cout << "Enter day birthdate : "; cin >> friendBirthdate.day;
    cout << "Enter month birthdate : "; cin >> friendBirthdate.month;
    cout << "Enter year birthdate : "; cin >> friendBirthdate.year;
    cout << "Enter month name birthdate : "; cin >> friendBirthdate.month_name;

    cout << "-------------Friend Birthdate ----------------\n";
    cout << "Day : " << friendBirthdate.day << endl;
    cout << "Month :" << friendBirthdate.month << endl;
    cout << "Year : " << friendBirthdate.year << endl;
    cout << "Month name" << friendBirthdate.month_name << endl;
}

