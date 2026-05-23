

#include <iostream>
using namespace std;
/*
Створити структуру ВІДЕОКРАМНИЦЯ з такими
полями:
■ Назва фільму;
■ Режисер;
■ Жанр;
■ Рейтинг популярності;
■ Ціна диска.
Реалізувати такі можливості:
■ Пошук за назвою;
■ Пошук за жанром;
■ Пошук за режисером;
■ Найпопулярніший фільм у жанрі;
■ Показ і додавання всіх записів.
*/
struct  Movie
{
	int id;
	char name[50];
	char director[50];
	char genre[50];
	float rating;
	double price;
};

void ShowInfo(Movie m)
{
	cout << "\tId : " << m.id << endl;
	cout << "\tName : " << m.name << endl;
	cout << "\tDirector : " << m.director << endl;
	cout << "\t\Genre : " << m.genre << endl;
	cout << "\t\Rating : " << m.rating << endl;
	cout << "\t\Price : " << m.price << "$" << endl << endl;;
}
void SearchByName(Movie movies[], int size, char name[])
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(movies[i].name, name) == 0) {
			ShowInfo(movies[i]);
		}
	}
}
void SearchByGenre(Movie movies[], int size, char genre[])
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(movies[i].genre, genre) == 0) {
			ShowInfo(movies[i]);
		}
	}
}
void SearchByDirector(Movie movies[], int size, char director[])
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(movies[i].director, director) == 0) {
			ShowInfo(movies[i]);
		}
	}
}
void MostPopularFilm(Movie movies[], int size)
{
	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < size; i++)
	{
		if (movies[i].rating > max)
		{
			max = movies[i].rating;
			maxIndex = i;
		}
	}
	ShowInfo(movies[maxIndex]);
}


int main()
{
	const int size = 5;
	Movie movies[size] = {
		 {1, "Inception", "Christopher Nolan", "Sci-Fi", 8.8, 12.99},
		{2, "Titanic", "James Cameron", "Drama", 7.9, 10.50},
		{3, "The Matrix", "Lana Wachowski", "Action", 8.7, 11.75},
		{4, "Interstellar", "Christopher Nolan", "Adventure", 8.6, 14.20},
		{5, "Joker", "Todd Phillips", "Thriller", 8.4, 9.99}
	};

	int key;
	char name[50];
	do
	{
		cout << "---------------------------- Menu --------------------" << endl;
		cout << "Search by name -       [1]" << endl;
		cout << "Search by genre -      [2]" << endl;
		cout << "Search by director -   [3]" << endl;
		cout << "Most popular film -    [4]" << endl;
		cout << "Show all -             [5]" << endl;
		cout << "Exit -                 [0]" << endl;
		cin >> key;
		cin.ignore();
		switch (key)
		{
		case 1:
			cout << "Enter movie name : ";
			//cin >> name;
			cin.getline(name, 50);
			SearchByName(movies, size, name);

			break;
		case 2:
			cout << "Enter movie genre : ";
			//cin >> name;
			cin.getline(name, 50);
			SearchByGenre(movies, size, name);
			break;
		case 3:
			cout << "Enter movie director : ";
			//cin >> name;
			cin.getline(name, 50);
			SearchByDirector(movies, size, name);
			break;
		case 4:
			MostPopularFilm(movies, size);
			break;
		case 5:
			for (int i = 0; i < size; i++)
			{
				ShowInfo(movies[i]);
			}
			break;
		case 0:
			cout << "Goodbye!!!!" << endl;
			break;

		default:
			break;
		}






	} while (key!=0);






}
