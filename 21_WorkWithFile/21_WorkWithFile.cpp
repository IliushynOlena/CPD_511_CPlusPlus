
#include <iostream>
#include <fstream>
using namespace std;

struct Product {
	char name[20];
	double price;
	bool isInStoke;
};

int main()
{
	Product pr{ "Laptop",25000,true };
	ofstream out("laptop.txt");
	out << pr.name << "\n" << pr.price << "\n" << pr.isInStoke << endl;
	out.close();

	Product read;
	/*ifstream file_in("laptop.txt");
	file_in >> read.name;
	file_in >> read.price;
	file_in >> read.isInStoke;
	cout << "Read : " << read.name << " " << read.price << " " << read.isInStoke << endl;*/
	//Binary read and write
	ofstream binary_out("binary.bin", ios_base::out | ios_base::binary);
	binary_out.write((char*)&pr, sizeof(pr));
	binary_out.close();


	ifstream binary_in("binary.bin", ios_base::in | ios_base::binary);
	binary_in.read((char*)&read, sizeof(read));
	binary_in.close();
	cout << "Read : " << read.name << " " << read.price << " " << read.isInStoke << endl;

	// 
	//ofstream fout;
	//fout.open("text.txt");
	/*ofstream fout("text.txt");

	fout << "Work with file ." << endl;
	fout << "Work with file ." << endl;
	fout << "Work with file ." << endl;
	fout << "Work with file ." << endl;
	fout.close();*/




	ifstream fin;
	char buff[255];
	fin.open("text.txt");

	if (fin.is_open())
	{
		fin >> buff;
		cout << buff;

		while (!fin.eof())
		{
			fin.getline(buff, 255);
			cout << buff << endl;
		}
		
	}
	else
	{
		cout << "File not found" << endl;
	}

	fin.close();

	//ofstream f_out("exaple2.txt", ios_base::out | ios_base::trunc);
	ofstream f_out("D:\\exaple2.txt", ios_base::app);
	if (f_out.is_open())
	{
		f_out << "Second line" << endl;
	}
	f_out.close();










}

