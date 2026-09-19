#include <iostream>
#include <list>
#include <iomanip>
using namespace std;

void ShowList(list<int>& l1, list<int>& l2)
{
	list<int>::iterator it;
	cout << "List 1 : ";
	for ( it =l1.begin(); it != l1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << "\nList 2 : ";
	for (it = l2.begin(); it != l2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << endl;
}

struct Book {
	string name;
	string author;
	int pages;
};

bool CompareBookByName(const Book& b1, const Book& b2) {
	return b1.name < b2.name;
}
bool CompareBookByAuthor(const Book& b1, const Book& b2) {
	return b1.author < b2.author;
}
bool CompareBookByPages(const Book& b1, const Book& b2) {
	return b1.pages < b2.pages;
}
int main()
{
	list<Book>  library;//empty
	library.assign({
		Book{"Night","Gogol", 786},
		Book{"Maria","Kotliarevskiy", 230},
		Book{"Kobzar","Shevchenko", 1200}
		});
	cout << "-------------- Original Library --------------" << endl;
	for (Book b : library)
	{
		cout <<left<<  setw(15)<< b.name << setw(15) << b.author << setw(15) << b.pages << endl;
	}

	library.sort(CompareBookByName);
	cout << "-------------- Sort by Name --------------" << endl;
	for (Book b : library)
	{
		cout << left << setw(15) << b.name << setw(15) << b.author << setw(15) << b.pages << endl;
	}

	library.sort(CompareBookByAuthor);
	cout << "-------------- Sort by Author --------------" << endl;
	for (Book b : library)
	{
		cout << left << setw(15) << b.name << setw(15) << b.author << setw(15) << b.pages << endl;
	}

	library.sort(CompareBookByPages);
	cout << "-------------- Sort by Pages --------------" << endl;
	for (Book b : library)
	{
		cout << left << setw(15) << b.name << setw(15) << b.author << setw(15) << b.pages << endl;
	}


	/*
	list<int> list1, list2;
	for (int i = 0; i < 10; i++)
	{
		list1.push_back(i);
		list2.push_front(i);
	}

	ShowList(list1, list2);

	list1.assign({ 1,2,3,4,5,3,3,3 });
	ShowList(list1, list2);

	list<int>::iterator it_to_delete = list1.begin();
	it_to_delete++;

	list1.erase(it_to_delete);
	ShowList(list1, list2);

	list1.pop_back();
	ShowList(list1, list2);
	list1.pop_front();
	ShowList(list1, list2);

	list1.remove(3);
	ShowList(list1, list2);

	list1.insert(list1.begin(), 99);
	ShowList(list1, list2);
	list1.insert(list1.end(), {11,22,33,44});
	ShowList(list1, list2);
	list1.insert(list1.end(), 4, 15);
	ShowList(list1, list2);

	list1.push_back(200);
	ShowList(list1, list2);
	list1.push_front(555);
	ShowList(list1, list2);

	//list1.resize(205);
	//list1.resize(20, 5);
	list1.resize(3);
	ShowList(list1, list2);

	list1.splice(list1.end(), list2, list2.begin());
	ShowList(list1, list2);

	list1.reverse();
	ShowList(list1, list2);

	list1.sort();
	list2.sort();
	ShowList(list1, list2);

	list1.merge(list2);
	ShowList(list1, list2);

	list1.unique();
	ShowList(list1, list2);

	list1.swap(list2);
	ShowList(list1, list2);
	*/




   
}

