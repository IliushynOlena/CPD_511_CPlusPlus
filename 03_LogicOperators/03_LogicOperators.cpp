#include <iostream>
using namespace std;

int main()
{
    // operators : + - * /
    // logic operators : < > <= >= == !=
    
     
    //Унарні (-5) ++, --
    //Бінарні оператори :  + - * / < > <= >= == !=
    //Тернарний оператор  : умова ? дія1 : дія2
    /*
    int a = 5;
    int b = 2;
    cout << a << " + "<< b<< " = "<< a + b << endl;
    cout << a << " - "<< b<< " = "<< a - b << endl;
    cout << a << " * "<< b<< " = "<< a * b << endl;
    cout << a << " / "<< b<< " = "<< a / b << endl;
    cout << a << " % "<< b<< " = "<< a % b << endl;
    cout << 3 << " % "<< 10<< " = "<< 3 % 10 << endl;//3

    // 10%3 = 1

    // Інкремент ++ і декремент  --
    cout << a << endl;
    a = a + 1;
    cout << a << endl;
    a++;//постфіксна форма інкременту
    cout << a << endl;
    ++a;//префіксна форма інкременту
    cout << a << endl;
    a = a - 1;
    cout << a << endl;
    a--;//постфіксна форма декремент
    cout << a << endl;
    --a;//префіксна форма дукременту
    cout << a << endl;

    int c = 8;
    cout << c << endl;//8 -------------------->
    cout << ++c << endl;//9  <-------------------
    cout << c++ << endl;//10  ---------------->
    cout << c << endl;

    c = c + 12;
    cout << c << endl;
    c += 12;
    cout << c << endl;
    c -= 12;
    cout << c << endl;
    c *= 12;
    cout << c << endl;
    c /= 12;
    cout << c << endl;
    c %= 12;
    cout << c << endl;

    //Перетворення типів
    int d = -55;//4b
    unsigned int m = 55;//4b unsigned - тільки додатні числа
    cout << m << endl;
    m = -50;
    cout << d << endl;
    cout << m << endl;
   
    //Класифікація за діапазоном значень
    //1. Звужуюче перетворення 
    //1. Неявне перетворення.
    int A = 23.5;
    cout << "A = " << A << endl;

    //2. Розширююче перетворення.
    long long B = 300000000;
    cout << B << endl;

    //2. Явне перетворення 
    double p = 3.14;//double --> double -->  8b 3.1400000000000000
    cout << p << endl;
    float f = (int) p;//double --- float // 4b --> 3.14000000
    cout << f << endl;

    float res = (float) a / b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "res = " << res << endl;
     */
    //Логічні операції  
    //1. Оператори порівняння;  < > <= >=
    //2. Оператори рівності;   == !=
    //3. Логічні оператори об'єднання та негативна інверсія.
    // 5 > 2
    /*
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;//(5 = 2) or (5 > 2)
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (4 != 7) << endl;
    cout << !(4 != 7) << endl;
    cout << ((5 > 1) && (5 < 6)) << endl;
    cout << ((5 > 1) || (5 < 6)) << endl;
    */
    //if (ymova)
    //{
    //    dia1;
    //}
    //else
    //{
    //    dia2;
    //}
   /* cout << "Enter a : "; cin>> a;
    cout << "Enter b : ";cin>> b ;

    if (b == 0)
    {
        cout << "Study Math. Can't divide by zero!!!" << endl;
    }
    else
    {
        res = (float)a / b;
        cout << "Result = " << res << endl;

    }*/

    /*
    int day;
    cout << "Enter number day : ";
    cin >> day;
    if (day == 1)
    {
        cout << "Monday" << endl;
    }
    else if (day == 2)
    {
        cout << "Tuesday" << endl;
    }
    else if (day == 3)
    {
        cout << "Wednesday" << endl;
    }
    else if (day == 4)
    {
        cout << "Thursday" << endl;
    }
    else if (day == 5)
    {
        cout << "Friday" << endl;
    }
    else if (day == 6)
    {
        cout << "Saturday" << endl;
    }
    else if (day == 7)
    {
        cout << "Sunday" << endl;
    }
    else
    {
        cout << "Incorrect day " << endl;
    }
    */
   
    float a, b, res;
    cout << "Enter first number a : "; cin >> a;
    cout << "Enter first number b : "; cin >> b;
    char key;
    cout << "Choose the operation : " << endl;
    cout << "\t [+] - add numbers  " << endl;
    cout << "\t [-] - sub numbers  " << endl;
    cout << "\t [*] - multy numbers  " << endl;
    cout << "\t [/] - divide numbers  " << endl;
    cout << "\t [0] - exit  " << endl;
    cin >> key;

    if (key == '+')
    {
        res = a + b;
        cout << a << " + " << b << " = " << res << endl;
    }
    else if (key == '-')
    {
        res = a - b;
        cout << a << " - " << b << " = " << res << endl;
    }
    else if (key == '*')
    {
        res = a * b;
        cout << a << " * " << b << " = " << res << endl;
    }
    else if (key == '/')
    {
        if (b == 0)
        {
            cout << "Study Math. Can't divide by zero!!!" << endl;
        }
        else
        {
            res = (float)a / b;
            cout << a << " / " << b << " = " << res << endl;
        }       
    }
    else if (key == '0')
    {
        cout << "Goodbye" << endl;
    }
    else
    {
        cout << "Incorrect choice" << endl;
    }


    switch (key)
    {
   
    case '+':
        res = a + b;
        cout << a << " + " << b << " = " << res << endl;
        break;
    case '-':
        res = a - b;
        cout << a << " - " << b << " = " << res << endl;
        break;
    case '*':
        res = a * b;
        cout << a << " * " << b << " = " << res << endl;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Study Math. Can't divide by zero!!!" << endl;
        }
        else
        {
            res = (float)a / b;
            cout << a << " / " << b << " = " << res << endl;
        }
        break;
    case '0':
        cout << "Goodbye" << endl;
        break;       

    default:
        cout << "Incorrect choice" << endl;
        break;
    }


    int new_key;
    cout << "Choose the operation : " << endl;
    cout << "\t [1] - add numbers  " << endl;
    cout << "\t [2] - sub numbers  " << endl;
    cout << "\t [3] - multy numbers  " << endl;
    cout << "\t [4] - divide numbers  " << endl;
    cout << "\t [0] - exit  " << endl;
    cin >> new_key;

    switch (new_key)
    {

    case 1:
    case 7:
        res = a + b;
        cout << a << " + " << b << " = " << res << endl;
        break;
    case 2:
        res = a - b;
        cout << a << " - " << b << " = " << res << endl;
        break;
    case 3:
        res = a * b;
        cout << a << " * " << b << " = " << res << endl;
        break;
    case 4:
        if (b == 0)
        {
            cout << "Study Math. Can't divide by zero!!!" << endl;
        }
        else
        {
            res = (float)a / b;
            cout << a << " / " << b << " = " << res << endl;
        }
        break;
    case 0:
        cout << "Goodbye" << endl;
        break;

    default:
        cout << "Incorrect choice" << endl;
        break;
    }
}

