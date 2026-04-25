

#include <iostream>
using namespace std;

void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;//0.......99
	}
}
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int LinearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return -1;
}
void SelectSort(int arr[], int size)
{
	int temp, index;
	for (int i = 0; i < size; i++)
	{
		index = i;
		temp = arr[i];
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < temp)
			{
				temp = arr[j];
				index = j;
			}
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;
		}
	}
	
}
void BubleSort(int arr[], int size)
{
	int temp;

	for (int i = 0; i < size; i++)//20
	{
		for (int j = size-1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
		    }
		}
	}
}
void ShakerSort(int arr[], int size)
{
	int j, index = size - 1;
	int left = 1, right = size - 1;
	int temp;
	do
	{
		for ( j = right; j >= left ; j--)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				index = j;
			}
		}
		left = index + 1;
		for ( j = left; j <= right; j++)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				index = j;
			}
		}
		right = index - 1;

	} while (left < right);
}
void InsertSort(int arr[], int size)
{
	//11 4 2 7 3 11 8 9 6 
	int temp;
	int j;
	for (int i = 0; i < size; i++)
	{
		//i = 1;		
		temp = arr[i];//4
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			//j = 0
			//arr[j + 1] = 4
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}

}
void QuickSort(int arr[], int B, int E)
{
	int i = B, j = E;
	int temp, p;
	p = arr[(B + E) / 2];
	do
	{
		while (arr[i] < p) i++;
		while (arr[j] > p) j--;

		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);

	if (B < j)QuickSort(arr, B, j);
	if (i < E)QuickSort(arr, i, E);
}
int BinarySearch(int arr[], int size, int key)
{
	int B = 0, E = size - 1;
	int p;
	while (true)
	{
		p = (B + E) / 2;
		if (key > arr[p])
		{
			B = p + 1;
		}
		else if (key < arr[p])
		{
			E = p - 1;
		}
		else if (key == arr[p])
			return p;

		if (B > E) return -1;
	}
}
int main()
{
	srand(time(0));
	const int size = 20;
	int arr[size]{};
	InitArray(arr, size);
	PrintArray(arr, size);
	//Сортування  вибором
	//SelectSort(arr, size);
	//«Бульбашкове»  сортування
	//BubleSort(arr, size);
	//Шейкерне сортування ( оптимізація бульбашки)
	//ShakerSort(arr, size);
	//сортування вставкою
	//InsertSort(arr, size);
	//швидкe сортування
	QuickSort(arr, 0, size-1);
	PrintArray(arr, size);





	int key, index;
	cout << "Enter key for search : "; cin >> key;

	//index = LinearSearch(arr, size, key);
	index = BinarySearch(arr, size, key);
	if (index != -1)
	{
		cout << "The key was found by index ---> " << index << endl;
	}
	else
	{
		cout << "Value not found!" << endl;
	}
}

