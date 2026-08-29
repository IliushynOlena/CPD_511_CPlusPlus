#include <iostream>
using namespace std;

class Document {
	string name;
	string format;
	int pages;
public:
	Document():name("none"),format("none"),pages(0){}
	Document(string name, string f, int p):name(name),format(f),pages(p){}
	void Print()const {
		cout << "Name : " << name << endl;
		cout << "Format : " << format << endl;
		cout << "Pages : " << pages << endl<<endl;
	}
	
};
class Cartridge {
private:
	float volume;
	string color;
public:
	Cartridge() :volume(0), color("none") {}
	Cartridge(float v, string c) :volume(v), color(c) {}
	void Print()const {
		cout << "Volume : " << volume << endl;
		cout << "Color : " << color << endl;
	}
	

};
class Scanner {
	float scanResolution;
	float height, width;
public:
	Scanner() :scanResolution(0), height(0), width(0){}
	Scanner(float s, float h, float w) :scanResolution(s), height(h), width(w){}
	void Print()const {
		cout << "scanResolution : " << scanResolution << endl;
		cout << "height : " << height << endl;
		cout << "width : " << width << endl;
	}
	

};

class Printer {
	string model;
	//composition
	Cartridge* cartridges;
	int countC;
	Scanner scanner;//default constructor

	//Aggregation
	Document* current_doc;
public:
	Printer(): model("none"), cartridges(nullptr), countC(0), current_doc(nullptr){}
	Printer(string model, float s, float h, float w):current_doc(nullptr)
	{
		this->model = model;
		scanner = Scanner(s, h, w);

		countC = 4;
		cartridges = new Cartridge[countC];
		cartridges[0] = Cartridge(400, "Black");
		cartridges[1] = Cartridge(400, "Red");
		cartridges[2] = Cartridge(400, "Green");
		cartridges[3] = Cartridge(400, "Blue");
	}
	void AddDocToPrint(Document* doc)
	{
		current_doc = doc;
	}
	void PrintDoc()
	{
		if (current_doc != nullptr) {
			current_doc->Print();
		}
		else
		{
			cout << "Document not fount!" << endl;
		}
	}
	void Scan()const {
		cout << "Scanning document........." << endl;
		scanner.Print();
	}
	void SettingCartridges() {
		cout << "Cartridges : ";
		for (int i = 0; i < countC; i++)
		{
			cartridges[i].Print();
		}
	}
	~Printer() {
		if (cartridges != nullptr)
			delete[]cartridges;
	}
};

int main()
{
	Printer printer("Cannon",400,50,80);
	printer.Scan();
	printer.SettingCartridges();

	printer.PrintDoc();

	Document doc("C++ for beginners", "A5", 1523);
	Document doc2("Passport", "A4", 2);
	doc.Print();
	doc2.Print();

	printer.AddDocToPrint(&doc);
	printer.PrintDoc();
	printer.AddDocToPrint(&doc2);
	printer.PrintDoc();
   




}

