//#include <iostream>
//using namespace std;
//
//class List
//{
//private:
//	int size;//0
//	int* collection;//1 5 4 2 3 6 9 7 4  1 2 3
//public:
//	List():size(0),collection(nullptr){}
//	
//	int getElementByPosition(int pos)//5
//	{
//		if (size == 0)return 1;
//		if (pos < 0 or pos >= size) return 2;
//		return rand() % 10;
//	}
//};
//float Divide(float a, float b)
//{
//	//try catch throw
//	float res = 0;
//	if (b == 1)throw 404;
//	if (b == 5)throw "Divide by zero!";
//	if (b == 0) {
//		throw exception("You can't divide by zero!!!");
//		//cout << "You can't divide by zero!!!" << endl;
//	}
//	else
//	{
//		res = a / b;
//		cout << "Result : " << res << endl;
//		return res;
//	}
//	
//}
//class PasswordInvalidException : public exception
//{
//public:
//	PasswordInvalidException(const char * message): exception(message){}
//
//};
//class PasswordIsSmallException : public exception
//{
//	int length;
//public:
//	PasswordIsSmallException(const char* message, int length) :length(length),
//		exception(message) {}
//	void Message()const
//	{
//		cout << what() << endl;
//		cout << "Actual lenght " << length << endl;
//	}
//};
//void Login(const char* login, const char* passwod)
//{
//	if (strlen(passwod) < 6)
//		throw PasswordIsSmallException( "Password is to small!" ,strlen(passwod));
//	if (!isalpha(passwod[0]) || !islower(passwod[0]))
//		throw PasswordInvalidException("Passwrod is invalid" );
//	if (!isalpha(login[0]) || !isupper(login[0]))
//		throw exception("Login is invalid" );
//	cout << "Loading......................" << endl;
//
//}
//
//int main()
//{
//	char login[100];
//	char password[100];
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Enter login : ";
//		cin >> login;
//		cout << "Enter password : ";
//		cin >> password;
//		try
//		{
//			Login(login, password);
//		}
//		catch (PasswordInvalidException ex)
//		{
//			cout << ex.what() << endl;
//			cout << "Password has first element low letter [qwerty123] " << endl;
//		}
//		catch (PasswordIsSmallException ex)
//		{
//			ex.Message();
//			cout << "Your password must be more than 6 symbols" << endl;
//		}
//		catch (exception ex)
//		{
//			cout << ex.what() << endl;
//		}
//		
//
//	}
//	//exception
//	//float a, b;
//	//cout << "Enter a and b : ";
//	//cin >> a >> b;
//
//	//try
//	//{
//	//	float res = Divide(a, b);
//	//	cout << "Res in main = " << res << endl;
//	//}
//	//catch (exception ex)
//	//{
//	//	cout << ex.what() << endl;
//	//}
//	//catch (int error)
//	//{
//	//	cout << error << endl;
//	//}
//	//catch (const char* ex) {
//	//	cout << ex << endl;
//	//}
//	//catch (...) //catch any error
//	//{
//	//	cout << "Unknown exception" << endl;
//	//}
//	//cout << "Continueeeeee" << endl;
//	//cout << "Continueeeeee" << endl;
//	//cout << "Continueeeeee" << endl;
//	//cout << "Continueeeeee" << endl;
//	//
// //  
//
//
//
//
//
//
//}
//
