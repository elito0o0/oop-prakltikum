#include<iostream>
#include<string.h>
using namespace std;
class BankAccount
{
	char client[23];
	char bankAccount[15];
	double money;
public:
	BankAccount(const char *_client, const char *_bankAccount, const double _money)
	{
		client[23]= *_client;
		bankAccount[15] = *_bankAccount;
		money = _money;
	}
	void bankAccount_enter()
	{
		cin >>client;
		cin >> bankAccount;
		cin >> money;
	}
	void bankAccount_print()
	{
		cout << client << endl << bankAccount << endl << money << endl;
	}
	void withdraw(double n)
	{
		money += n;
		
		cout << money; 
		cout << endl;
	}
	void GetMoney(double n)
	{
		money -= n;
		
		cout << money;
		cout << endl;
	}
};
int main()
{
	BankAccount a=BankAccount(" "," ",0);
	a.bankAccount_enter();
	a.bankAccount_print();
	double n,m;
	cout << "Enter money to get - ";
	cin >> n;
	a.GetMoney(n);
	cout << "Enter money to withdraw - ";
	cin >>m;
	a.withdraw(m);
	system("pause");
	return 0;
