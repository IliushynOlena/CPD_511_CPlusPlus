
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

	// Текстовий запис до файлу
	//ofstream fout;
	//fout.open("text.txt");
	/*ofstream fout("text.txt"); // об*єк, що вміє записувати дані до файлу

	//запис рядків
	fout << "Work with file ." << endl;
	fout << "Work with file ." << endl;
	fout << "Work with file ." << endl;
	fout << "Work with file ." << endl;
	//обов*язково файл закриваємо
	fout.close();*/




	ifstream fin;//об*єкт, що зчитує інформацію з файлу
	char buff[255];//робимо буфер, в який читаємо
	fin.open("text.txt");//файд відкриваємо

	if (fin.is_open())//перевіряємо чи файл відкритий
	{
		fin >> buff;//зчитуємо до пробілу
		cout << buff;//показуємо на екран

		while (!fin.eof())//читаємо, поки не кінець файлу
		{
			fin.getline(buff, 255);//читаємо по рядках
			cout << buff << endl;//показуємо на екран
		}
		
	}
	else
	{
		cout << "File not found" << endl;
	}

	fin.close();

	//ofstream f_out("exaple2.txt", ios_base::out | ios_base::trunc);
	//ios_base::out;//режим запису
	//ios_base::in;//режим зчитування
	//ios_base::app;//режим дозапису
	//ios_base::trunc;//режим очищення
	//ios_base::binary;//бінарний режим
	ofstream f_out("D:\\exaple2.txt", ios_base::app);//відкриваємо в режимі дозапису
	if (f_out.is_open())
	{
		f_out << "Second line" << endl;
	}
	f_out.close();










}

