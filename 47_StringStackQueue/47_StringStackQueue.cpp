#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main()
{

    stack<string> plates;
    plates.push("Plate 1");
    plates.push("Plate 2");
    plates.push("Plate 3");
       
    while (!plates.empty())
    {
        cout << plates.top() << endl;
        plates.pop();
    }
    cout << "Size plates : " << plates.size() << endl;

    queue<string> clients;
    clients.push("Vitia");
    clients.push("Kolya");
    clients.push("Sofia");
    clients.push("Oksana");
    clients.push("Petro");

    cout << "First in queue : " << clients.front() << endl;
    cout << "Last in queue : " << clients.back() << endl;

    while (!clients.empty())
    {
        cout << "Client : " << clients.front() << endl;
        clients.pop();
    }


    priority_queue<string> workers;
    workers.push("Vitia");
    workers.push("Kolya");
    workers.push("Sofia");
    workers.push("Oksana");
    workers.push("Petro");
    cout << "First in queue : " << workers.top() << endl;

    while (!workers.empty())
    {
        cout << "Client : " << workers.top() << endl;
        workers.pop();
    }

    deque<int> deck;
    deck.push_back(100);
    deck.push_back(200);
    deck.push_back(300);
    deck.push_back(1000);
    deck.push_front(2000);
    deck.push_front(3000);
    while (!deck.empty())
    {
        cout << "Client : " << deck.front() << endl;
        deck.pop_front();
    }


  //  deck.pop_back();
   // deck.pop_front();

    /*
    string name = "Ivan";

    string str = string("lOTERRY WINNER");
    cout << str << endl;
    string two(20, '#');
    cout << two << endl;
    string three(str);
    cout << two << endl;
    str += two;
    cout << str << endl;
    str[0] = 'A';
    cout << str << endl;
    string four = str + two;
    cout << four << endl;

    char alls[] = "All's well that ends well";
    string five(alls, 20);
    cout << five << endl;
    string six(alls + 2, alls + 10);
    cout << six << endl;
    string seven(&alls[6], &alls[10]);
    cout << seven << endl;
    string eight(four, 7, 20);
    cout << eight << endl;


    cout << str << endl;
    for (auto i = str.begin(); i != str.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    for (char s : str)
    {
        cout << s << " -- ";
    }
    //str.clear();

    if (str.empty())
        cout << "Str is empty " << endl;
    cout << endl;
    cout << "Size : " << str.size() << " Lenght : "<< str.length() << endl;
    cout << "capacity : " << str.capacity() << endl;

    str = "Hello";
    str[0] = 'h';
    cout << str[0] << endl;
    cout << str << endl;


    str.append(str.begin(), str.end());
    cout << str << endl;
    str.append(" end ");
    cout << str << endl;
    str.append(alls, 5);
    cout << str << endl;
    str.append({'g','d','s'});
    cout << str << endl;

    str += "df;ksdlg";
    cout << str << endl;

    str.insert(str.begin(), 'a');
    cout << str << endl;
    str.insert(str.begin(), { 'a' ,'d','v'});
    cout << str << endl;

    str.insert(0, 4,'O');
    cout << str << endl;


    //str.erase(str.begin(), str.end() - 5);
    //str.erase(1,3);
    //str.erase(5);
    //str.erase();

    cout << str << endl;

    str.replace(0, 5, "year");
    cout << str << endl;


    // Get C string equivalent
    const char* c_str2 = str.c_str();

    cout << "str: " << str << endl;
    // find content in string
    cout << "index of first 'o' = " << str.find('o') << endl;
    cout << "index of first 'o' = " << str.find("hello") << endl;

    if (str.find("hello") == string::npos)
        cout << "not found!" << endl;

    // find last occurrence of content in string
    cout << "index of last 'o' = " << str.rfind("Oello") << endl;

    // find character in string
    cout << "found index: " << str.find_first_of("abcd") << endl;
    // find character in string from the end
    cout << "found index: " << str.find_last_of("abl") << endl;

    // find absence of character in string
    cout << "found index: " << str.find_first_not_of("hello, world") << endl;
    // find non - matching character in string from the end
    cout << "found index: " << str.find_last_not_of("hello, world") << endl;

    // generate substring
    // "hello, blabla world!"
    cout << "substring: " << str.substr(7, 5) << endl;
    */

}

