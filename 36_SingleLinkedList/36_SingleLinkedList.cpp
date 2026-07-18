#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    Node(int value, Node *next):value(value), next(next){}
   
};
class List {
    Node* head;
public:
    List()
    {
        head = nullptr;
    }

    void AddToHead(int value) {
        Node* newNode = new Node(value, head);
        //newNode->value = value;
        //newNode->next = head;
        head = newNode;
    }
    void AddToTAil(int value) {
        Node* newNode = new Node(value, nullptr);

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node* current = head;
            while (current->next != nullptr)
            {

                current = current->next;
            }
            current->next = newNode;
        }

        
        
    }
    void DeleteFromTail()
    {
        if (head == nullptr) return;
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        else {

            Node* current = head;
            while (current->next->next != nullptr) {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;

        }


    }
    int getElement(int pos)//3
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
    int operator[](int pos)//3
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
        Node* current = head;
        while (current != nullptr)
        {
            cout << current->value << " ";
            current = current->next;
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
int main()
{
    List l;
  /*  for (int i = 0; i < 10; i++)
    {
        l.AddToHead(i + 1);
    }
    l.PrintList();

    l.AddToTAil(100);
    l.AddToTAil(200);*/
    l.AddToTAil(300);
    l.PrintList();

    cout << "\nFind 5 element by position " << l.getElement(5) << endl;
    cout << "\nFind 5 element by position " << l[5] << endl;

    l.PrintList();
    l.DeleteFromTail();
    l.PrintList();
   /* l.DeleteFromTail();
    l.PrintList();
    l.DeleteFromTail();
    l.PrintList();*/
}

