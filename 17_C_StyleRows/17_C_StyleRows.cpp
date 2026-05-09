
#include <iostream>
using namespace std;

int main()
{
  
	char word[] = { 'C','a','t','!' };
	for (int i = 0; i < 4; i++)
	{
		cout << word[i];
	}

	char mystring[] = "string";
	//int arr[] = { 1,2,3,4,5,6,7 };
	cout << "my string : " << mystring << endl;

	//mystring = "Cat!";
	mystring[1] = 'p';
	//arr[0] = 7;
	for (int i = 0; i < sizeof(mystring); i++)
	{
		cout << static_cast<int>(mystring[i]) << " ";
	}
	cout << "my string : " << mystring << endl;

	char name[150] = "Max";//size --> 3 letters + \0
	cout << "My name is  : " << name << endl;
	cout << name << " has " << strlen(name) << "letters " << endl;
	cout << name << " has " << sizeof(name) << "size " << endl;

	//char myname[255];
	//cout << "Enter name : ";
	////cin >> myname; // зчитує інформацію до пробілу
	//cin.getline(myname, 255);
	//cout << "You entered : " << myname << endl;

	char text[] = "Print this!";
	char copy[50];
	strcpy_s(copy, text);
	cout << "Original : " << text << " . Copy : " << copy << endl;

	char arr[255] = "Return the head of a list";
	cout << arr << endl;
	cout << "Lenght : " << strlen(arr) << endl;
	//arr[2] = '\0';
	//cout << arr << endl;
	//cout << "Lenght : " << strlen(arr) << endl;
	//cout << "Enter text : ";
	//cin >> arr;
	//cout << "Lenght : " << strlen(arr) << endl;
	_strupr_s(arr);
	cout << arr << endl;
	_strlwr_s(arr);
	cout << arr << endl;

	_strrev(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;

	//add content to array

	strcat_s(arr, "...");
	cout << arr << endl;
	cout << "Enter text : ";
	cin >> text;
	strcat_s(arr,text);
	cout << arr << endl;
	strcat_s(arr, name);
	cout << arr << endl;


	isalpha('a');
	isdigit('5');
	isspace(' ');

	//islower(); toupper();
 
}

