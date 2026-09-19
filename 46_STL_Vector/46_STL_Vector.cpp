#include <iostream>
#include <vector>
using namespace std;

void Print(const vector<int> &v1)
{
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
}
class User{};
int main()
{
    int number = 5;


    int marks[10] = { 11,12,1,5,6,9,7,8,10 };

    int* marks1 = new int[5] {11, 11, 12, 11, 10};
    delete[]marks1;
    
    vector<int> v11;
    vector<string> v12;
    vector<User> v13;


    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v2 = { 20,30,40,50,60,70 };
    cout << "Size v1 -> " << v1.size() << endl;
    cout << "Capacity v1 -> " << v1.capacity() << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    v1[4] = 100;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    for (int item : v1)
    {
        cout << item << " -- ";
    }
    cout << endl;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    cout << "Size v1 -> " << v1.size() << endl;
    cout << "Capacity v1 -> " << v1.capacity() << endl;
    //delete elements 
    Print(v1);
    v1.erase(v1.begin());
    Print(v1);
    v1.erase(v1.begin()+2);
    Print(v1);
    v1.erase(v1.end()-1);
    Print(v1);
    v1.erase(v1.begin()+3, v1.end() - 2);
    Print(v1);

    //add elements by position
    v1.insert(v1.begin(), { 77,88,99 });
    Print(v1);
    v1.insert(v1.end(), 5, 7);
    Print(v1);
    v1.insert(v1.begin(), 100);
    Print(v1);
    v1.insert(v1.begin(), v2.begin()+2, v2.end()-1);
    Print(v1);

    v1.push_back(111);
    v1.push_back(111);
    v1.push_back(111);
    v1.push_back(111);
    Print(v1);
    cout << "Size v1 -> " << v1.size() << endl;
    cout << "Capacity v1 -> " << v1.capacity() << endl;

    v1.pop_back();
    Print(v1);
    v1.pop_back();
    Print(v1);
    v1.pop_back();
    Print(v1);

    Print(v1);
    Print(v2);
   /* v1.swap(v2);
    Print(v1);
    Print(v2);*/
    cout << "First element : " << v1.front() << endl;

    v1.resize(50, 5);
    Print(v1);
    v1[35] = 555;
    v1.push_back(25);
    Print(v1);

    v1.resize(5);
    Print(v1);

    cout << "Size v1 -> " << v1.size() << endl;
    cout << "Capacity v1 -> " << v1.capacity() << endl;
    v1.shrink_to_fit();
    cout << "Size v1 -> " << v1.size() << endl;
    cout << "Capacity v1 -> " << v1.capacity() << endl;

    v1.push_back(25);
    v1.push_back(25);
    v1.push_back(25);
    Print(v1);
    cout << "Size v1 -> " << v1.size() << endl;
    cout << "Capacity v1 -> " << v1.capacity() << endl;




    
    
    
    
}
