#include <iostream>
using namespace std;

int main()
{
    
  /*  const int penny = 1;
    const int nickel = 5;
    const int dime = 10;
    const int quarter = 25;
    const int half = 50;
    const int  dollar_coin = 100;*/
  
    //enum (const int)  - це набір іменованих цілочисельних констант.
    enum coins{ penny=1 , nickel = 5, dime = 10, quarter = 25, half = 50, dollar_coin = 100 };
    cout << penny << endl;
    cout << nickel << endl;
    cout << dime << endl;
    cout << quarter << endl;

    int coin;
    cout << "Please, enter the value of American coin : ";
    cin >> coin;
    if (coin == 1)
    {
        cout << "Penny = 1 " << endl;
    }
    if (coin == penny)
    {
        cout << "Penny = 1 " << endl;
    }
    //coins coin_new = penny;

    switch (coin)
    {
    case penny: cout << "Penny = 1 " << endl;break;
    case nickel: cout << "nickel = 5 " << endl;break;
    case dime: cout << "dime = 10 " << endl;break;
    case quarter: cout << "quarter = 25 " << endl;break;
    case half: cout << "half = 50 " << endl;break;
    case dollar_coin: cout << "dollar_coin = 100 " << endl;break;
    default:
        cout << "No coins" << endl;
        break;
    }


  


}

