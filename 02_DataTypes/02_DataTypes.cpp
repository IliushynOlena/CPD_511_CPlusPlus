#include <iostream>
using namespace std;

int main()
{
    //1. Числові. 2. Символьні. 3. Логічні.
    //Тип даних - поняття, що визначає максимальний
    // розмір (у байтах) і тип інформації,
    // яка буде використовуватися програмою.

    //Змінна — область оперативної пам'яті, що володіє власним ім'ям 
        //і призначена для зберігання даних, які можуть бути змінені.
    float number = 2.56;

    //Константа — область оперативної пам’яті, 
    //    що володіє власним ім’ям і 
    //    призначена для зберігання постійних даних.
    const double pi = 3.14;

    const float g = 9.8;
    //g = 15; //error

    cout << number << "\n";
    cout << pi << endl;

    //pi = 985.45; error
    cout << "Number : " << number << endl;
    cout << "PI = " << pi << endl;

    int height = 15;
    short age = 15;
    //int int = 55;//error
    //INT b = 5;//error
    int Age = 45;
    int ageofhuman = 47;
    int age_of_human = 19;
    int ageOfHuman = 65;

    int a1 = 5;
    int a2 = 7;
    //int 3a = 49;//error
    int _digit = 100;
    char choice = 'y';
    cout << "Choice : " << choice << endl;
    
    bool flag = true;
    cout << flag << endl;
    //1. Великі та малі літери латинського алфавіту
    //2. Цифри.
    //3. Символ підкреслення «_». 
    //4. Не можна називати змінну ключовими словами мови програмування.
    //5. Небажане існування двох ідентифікаторів з однаковими іменами
    int number1;//4b
    number1 = 33;
    cout << "Number = " << number1 << endl;
    //2000 - count hours from year
    //366  ...... 24 

    int countDays_2000_Year = 366;
    const int countHoursInDay = 24;
    int countHoursInYear;//empty
    countHoursInYear = countDays_2000_Year * countHoursInDay;
    cout << "countHoursInYear - " << countHoursInYear << "hours" << endl;

    /*
    float discount = 0.05;
    float cost = 30.99;
    int count = 4;

    cout << "Enter cost product : ";
    cin >> cost;

    cout << "Enter count product : ";
    cin >> count;

    float price = cost * count - cost * count * discount;

    cout << "You need to pay : " << price << "grn" << endl;
    */
    //enter from keyboard
    // 
    //Ctrl+K+C - comment code
    //Ctrl+K+U - uncomment code

   /* int n;
    cout << "Enter number : ";
    cin >> n;
    cout << n << endl;*/

    cout << "Lat's play " << endl;
    int i;
    cout << "Enter number : ";
    cin >> i;
    cout << "I have " << i + 1 << endl;
    cout << "Xaxaxaxaxxa. I am winner" << endl;

}
