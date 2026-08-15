#include <iostream>
using namespace std;

template<typename T_data>
class List {

    struct Node {
        Node* prev;
        T_data value;
        Node* next;
        Node(Node* prev, T_data value, Node* next) :prev(prev), value(value), next(next) {}

    };


    Node* head;
    Node* tail;
public:
    List()
    {
        head = nullptr;
        tail = nullptr;
    }
    bool IsEmpty()
    {
        return head == nullptr;
    }
    void AddToHead(T_data value) {
        Node* newNode = new Node(nullptr, value, head);
        
        if (IsEmpty())
        {
            head = tail = newNode;
        }
        head->prev = newNode;
        head = newNode;
    }
    void AddToTAil(T_data value)
    {
        Node* newNode = new Node(tail, value, nullptr);

        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;            
        }
    }
    void DeleteFromTail()
    {
        if (IsEmpty()) return;
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        else {
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;         

        }


    }
    T_data getElement(int pos)//3
    {
        Node* current = head;
        int i = 1;

        while (current != nullptr)
        {
            if (pos == i) return current->value;
            current = current->next;
            i++;
        }
    }
    T_data operator[](int pos)//3
    {
        Node* current = head;
        int i = 1;

        while (current != nullptr)
        {
            if (pos == i) return current->value;
            current = current->next;
            i++;
        }
    }
    void PrintList()
    {
       /* Node* current = head;
        while (current != nullptr)
        {
            cout << current->value << " ";
            current = current->next;
        }*/
       

        for ( Node* i = head; i != nullptr; i = i->next)
        {
            cout << i->value << " ";
        }
        cout << endl;
    }
    ~List()
    {
        Node* current = nullptr;
        while (head != nullptr) {
            current = head;
            head = head->next;
            delete current;
        }
    }
};

struct Vagon {
    int number;
    int places;
    int passangers;
};
class Train
{
    //Vagon* vagons;
    List<Vagon> vagons;
    string mark;
    string model;
    string fullname;
    int age;

    int year;
    Train()
    {
        
    }
   
    int countVagons;
};
int main()
{
    List<int> l;
      for (int i = 0; i < 10; i++)
      {
          l.AddToHead(i + 1);
      }
      l.PrintList();

      l.AddToTAil(100);
      l.AddToTAil(200);

    l.AddToTAil(300);
    l.PrintList();

    cout << "\nFind 5 element by position " << l.getElement(5) << endl;
    cout << "\nFind 5 element by position " << l[5] << endl;

    l.PrintList();
    l.DeleteFromTail();
    l.PrintList();
     l.DeleteFromTail();
     l.PrintList();
     l.DeleteFromTail();
     l.PrintList();
}

