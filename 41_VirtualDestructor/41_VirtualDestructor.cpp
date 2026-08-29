//
//#include <iostream>
//using namespace std;
//
//class Student {
//    string name;
//    string spetialization;
//    int* marks;
//    int markCount;
//public:
//    Student():name("no name"),spetialization("none"), marks(nullptr), markCount() {}
//    Student(string name, string s):name(name), spetialization(s)
//    {
//        markCount = rand() % 10 + 1;
//        marks = new int[markCount];
//        for (int i = 0; i < markCount; i++)
//        {
//            marks[i] = rand() % 6 + 7;
//        }    
//    }
//    virtual void Print() const {
//        cout << "Name : " << name << endl;
//        cout << "Spetialization : " << spetialization << endl;
//        cout << "Mark count : " << markCount << endl;
//        for (int i = 0; i < markCount; i++)
//        {
//            cout << marks[i] << " ";
//        }cout << endl;
//
//    }
//    virtual ~Student(){
//        if (marks != nullptr)
//        delete[]marks;
//    }
//   
//};
//
//class Aspirant : public Student
//{
//    string* subjects;
//    int countSubjects;
//public:
//    Aspirant() :subjects(nullptr), countSubjects(0), Student() {}
//    Aspirant(string name, string s, initializer_list<string> sub) :Student(name, s)
//    {
//        countSubjects = sub.size();
//        subjects = new string[countSubjects];
//        int i = 0;
//        for (string s : sub)
//        {
//            subjects[i] = s;
//            i++;
//        }
//    }
//    void Print()const {
//        Student::Print();
//        cout << "Subjects : " << endl;
//        for (int i = 0; i < countSubjects; i++)
//        {
//            cout << " - " << subjects[i] << endl;
//        }
//        cout << endl;
//    }
//    ~Aspirant(){
//        if (subjects != nullptr)
//            delete[]subjects;
//    }
//
//   
//
//};
//
//int main()
//{
//    srand(time(0));
//    Student student("Vasia", "Programer");
//    student.Print();
//
//
//    Aspirant aspitant("Ivan", "UI/UX", { "MAin page" ,"Trends in UI", "User Experience"});
//    aspitant.Print();
//
//    Student* group[3]{
//        new Student("Vasia", "Programer"),
//        new Aspirant("Ivan", "UI/UX", { "MAin page" ,"Trends in UI", "User Experience"}),
//        new Aspirant("Olga", "Water Engeener", { "Recuperation" ,"Water"})
//    };
//
//    for (int i = 0; i < 3; i++)
//    {
//        group[i]->Print();
//        delete group[i];
//    }
//
//
//    
//}
