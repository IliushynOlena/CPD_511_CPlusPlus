#include <iostream>
#include <map>
#include <iomanip>
#include <list>
#include <string>
using namespace std;


map<string, int>::iterator findByValue(map<string, int>& m, int value)
{
    for (map<string, int>::iterator i = m.begin(); i != m.end() ; i++)
    {
        if (i->second == value) {
            return i;
        }
    }
    return m.end();
}
class Dictionary
{
    map<string, list<string>> dic;
    void AddTranslate(){}
    void RemoveWord(){}
};
int main()
{
    //STL   vector  list   stack queue   deque   map
    /// key (unique)  , value
    map<string, int> my_map;

    pair<string, int> p = { "Olga", 7 };
    my_map.insert(p);
    my_map.insert(pair<string, int>("Vasia", 2));
    my_map.insert(pair<string, int>("Ivana", 7));
    my_map.insert(make_pair("Mukola", 3));

    for (auto u : my_map)
    {
        cout <<"Key : " << setw(10) << u.first << "  Value : " << setw(5) << u.second << endl;
    }
    //pair<map<string,int>::iterator,bool> res = my_map.insert(pair<string, int>("Petro", 9));
    auto res = my_map.insert(pair<string, int>("Vasia", 9));
    if (res.second)
    {
        cout << "User was added!!!" << endl;
    }
    else
    {
        cout << "User was not added!!! Key must be unique" << endl;
    }
    cout << "------------------------------------" << endl;
    for (auto u : my_map)
    {
        cout << "Key : " << setw(10) << u.first << "  Value : " << setw(5) << u.second << endl;
    }

    cout << "Value --> " << my_map["Vasia"] << endl;
    cout << "Value --> " << my_map["Olga"] << endl;


    map<string,int>::iterator it =  my_map.find("Olga");
    if (it == my_map.end())
    {
        cout << "User not found" << endl;
    }
    else
    {
        cout << "User found!" << endl;
        cout << "Key : " << it->first << ". Value : " << it->second << endl;
        //it->first = "Olgaaaa"; error
        it->second = 11;
        cout << "Key : " << it->first << ". Value : " << it->second << endl;
    }

    map<string, int>::iterator find_elem = findByValue(my_map, 3);

    if (find_elem != my_map.end())
    {
        cout << "Key : " << find_elem->first << ". Value : " << find_elem->second << endl;
    }
    cout << "------------------------------------" << endl;
    for (auto u : my_map)
    {
        cout << "Key : " << setw(10) << u.first << "  Value : " << setw(5) << u.second << endl;
    }


    if (find_elem != my_map.end())
    {
        my_map.erase(find_elem);
    }
    cout << "------------------------------------" << endl;
    for (auto u : my_map)
    {
        cout << "Key : " << setw(10) << u.first << "  Value : " << setw(5) << u.second << endl;
    }

    my_map["Olga"] = 10000;

    cout << "------------------------------------" << endl;
    for (auto u : my_map)
    {
        cout << "Key : " << setw(10) << u.first << "  Value : " << setw(5) << u.second << endl;
    }


    map<string, list<string>> dic;

    string word = "run";
    list<string> translates = list<string>({ "bigtu","pochatu","zapochatkevatu" });
    pair<string, list<string>> p2(word, translates);
    dic.insert(p2);
    dic.insert(make_pair("bad",list<string>({"poganuy","borg","luxo"})));

    for (string word: dic["run"])
    {
        cout << word << " - ";
    }
    // add translate 
    string input = " ";
    cout << "Enter word to add translate "; getline(cin, input);
    if (dic.find(input) == dic.end())
    {
        cout << "Word not found!" << endl;
    }
    else
    {
        string translate = "";
        do
        {
            cout << "Enter new traslate : ";
            getline(cin, translate);
            dic[input].push_back(translate);


        } while (!translate.empty());
    }
    //check translates 
    cout << "Enter word to add translate "; getline(cin, input);
    if (dic.find(input) == dic.end())
    {
        cout << "Word not found!" << endl;
    }
    else
    {
        cout << "translates ";
        for (string word : dic[input])
        {
            cout << word << "** ";
        }
    }

}
