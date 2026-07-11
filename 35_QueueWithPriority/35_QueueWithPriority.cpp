

#include <iostream>
using namespace std;



class QueueWithPriority {

	struct Element 
	{
		char letter;
		int priority;
	};
private:
	Element* data;
	int size;
public:
	QueueWithPriority():data(nullptr), size(0){}
	
	~QueueWithPriority()
	{
		if (data != nullptr)
			delete[]data;
	}
	void Enqueue(char letter, int priority)
	{
		int index = 0;
		while (index < size && data[index].priority < priority) index++;
		size++;
		Element* temp = new Element[size];
		for (int i = 0; i < index; i++)
		{
			temp[i] = data[i];
		}
		temp[index] = Element{ letter, priority };
		for (int i = index+1; i < size; i++)
		{
			temp[i] = data[i - 1];
		}
		if (data != nullptr)
			delete[]data;
		data = temp;
	}
	bool IsEmpty()
	{
		return  size == 0;
	}
	Element Dequeue()
	{
		if (!IsEmpty())
		{
			Element first = data[0];
			for (int i = 0; i < size; i++)
			{
				data[i] = data[i + 1];
			}
			size--;
			return first;
		}
		return Element();
	}
	void Print()
	{
		cout << "============== Queue ==================" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << data[i].letter << " : " << data[i].priority << endl;
		}
		cout << "__________________________________________" << endl;
	}
};

int main()
{
	
	
	QueueWithPriority q;

	q.Enqueue('A', 1);
	q.Enqueue('G',5);
	q.Enqueue('K',8);
	q.Enqueue('B',2);
	q.Enqueue('C',3);

	q.Print();
	q.Enqueue( 'E',6 );
	q.Print();


	cout << "Remove element : " << q.Dequeue().letter << endl;

	while (!q.IsEmpty())
	{
		cout << "Remove element : " << q.Dequeue().letter << endl;
	}


}

